all: build

build: counter

counter: count.o
	g++ count.o -o counter

count.o: count.cc
	g++ -c count.cc

archive:
	tar -cf counter.tar .

clean:
	-rm counter
	-rm *.tar
	-rm *.exe
	-rm *.o