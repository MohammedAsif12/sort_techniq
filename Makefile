cc = gcc

sorting=main.o bubble_sort.o Insertion_sort.o Selection_Sort.o quick_sort.o Merge_Sort.o -o main

all: main

main: main.o bubble_sort.o Insertion_sort.o Selection_Sort.o quick_sort.o Merge_Sort.o
	$(cc) $(sorting)
main.o: main.c
	$(cc) -c main.c -o main.o
bubble_sort.o: bubble_sort.c
	$(cc) -c bubble_sort.c -o bubble_sort.o
Insertion_sort.o: Insertion_sort.c
	$(cc) -c Insertion_sort.c -o Insertion_sort.o
Selection_Sort.o: Selection_Sort.c
	$(cc) -c Selection_Sort.c -o Selection_Sort.o
quick_sort.o: quick_sort.c
	$(cc) -c quick_sort.c -o quick_sort.o
Merge_Sort.o: Merge_Sort.c
	$(cc) -c Merge_Sort.c -o Merge_Sort.o
clean:
	rm -rf *.o
