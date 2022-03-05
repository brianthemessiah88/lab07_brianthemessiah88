
examheap: examheap.o heap.o
	g++ -std=c++11 -o examheap examheap.o  heap.o
clean:
	rm -f *.o examheap