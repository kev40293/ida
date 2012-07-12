# Author:  Corentin Debains
# Email:   cdebains@iit.edu
#
# Author:  Pedro Alvarez-Tabio
# Email:   palvare3@iit.edu
#

CC=gcc
CXX=g++

CFLAGS=-Wall -Llib -Iinc -g -std=c99
CPPFLAGS=-lstdc++ -Llib -Iinc

LFLAGS=-lpthread -lecwrapper

OBJECTS=obj/c/ec.o obj/cpp/ffsnet.o obj/cpp/ffsnet_bridger.o

.PHONY: clean jerasure examples

all:
	make bin/ffsnetd
	make examples

#######################################################
#Jerasure-1.2
OBJECTS += obj/c/jerasureCompatibility.o
LIBS+=libjerasure.a

lib/libjerasure.a: 
	cd lib/Jerasure-1.2 && make
	ar rus lib/libjerasure.a lib/Jerasure-1.2/*.o

#######################################################
#Gibraltar (CUDA)

CUDAINC=-I $(CUDA_INC_PATH)
CUDALIB=-L $(CUDA_LIB_PATH)

CFLAGS+=$(CUDAINC)
LFLAGS+=$(CUDALIB)
 
LFLAGS+=-lcudart -lcuda
OBJECTS+=obj/c/gibraltarCompatibility.o
LIBS+=libgibraltar.a

lib/libgibraltar.a:  
	cd lib/libgibraltar-1.0 && make cuda=1
	ar rus lib/libgibraltar.a lib/libgibraltar-1.0/obj/*.o

#######################################################
#UDT (required by FFSNET)
UDTLOC=lib/udt4
CFLAGS+=-I$(UDTLOC)/src
CPPFLAGS+=-I$(UDTLOC)/src
LFLAGS+=-L$(UDTLOC)/src -ludt

libudt:
	cd $(UDTLOC) && make -e arch=AMD64 ## Please refer to UDT Readme for compilation

#######################################################

examples: lib/libecwrapper.a
	$(CC) $(CFLAGS) examples/example.c -o examples/example $(LFLAGS)
	$(CC) $(CFLAGS) examples/fileEncoder.c -o examples/fileEncoder $(LFLAGS)
	$(CC) $(CFLAGS) examples/fileDecoder.c -o examples/fileDecoder $(LFLAGS)
	$(CC) $(CFLAGS) examples/ffsnet_test_c.c -o examples/ffsnet_test_c $(LFLAGS)

bin/ffsnetd: src/ffsnetd.cpp lib/libecwrapper.a
	$(CXX) $(CPPFLAGS) src/ffsnetd.cpp -o bin/ffsnetd $(LFLAGS)

lib/libecwrapper.a: obj libs $(OBJECTS)
	mv obj/c/*.o obj/
	mv obj/cpp/*.o obj/
	ar rus lib/libecwrapper.a obj/*.o 

# If you don't have CUDA, remove lib/libgibraltar.a
libs: lib/libgibraltar.a lib/libjerasure.a libudt
	$(foreach var,$(LIBS),ar x lib/$(var); )
	mv *.o obj/

obj:
	mkdir -p obj
	mkdir -p obj/c
	mkdir -p obj/cpp

obj/cpp/%.o: src/%.cpp obj
	$(CXX) $(CPPFLAGS) -c src/$*.cpp -o obj/cpp/$*.o
	
obj/c/%.o: src/%.c obj
	$(CC) $(CFLAGS) -c src/$*.c -o obj/c/$*.o


clean:
	rm -rf obj
	rm -f examples/example
	rm -f examples/fileEncoder
	rm -f examples/fileDecoder
	rm -f examples/ffsnet_test_c

mrproper: clean
	rm -f lib/*.a
	rm -f bin/ffsnetd
