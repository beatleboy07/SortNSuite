PROGS := SortNSuite

CC=gcc
CFLAGS += -Wall

all: $(PROGS)

SortNSuite: SortAlgos.o FileData.o FileIO.o SortTools.o ExchangeSorts.o UserInterface.o
	$(CC) $(CFLAGS) -g SortAlgos.o FileData.o FileIO.o SortTools.o ExchangeSorts.o UserInterface.o -o SortNSuite

SortAlgos: SortAlgos.c
	$(CC) $(CFLAGS) -c SortAlgos.c
FileData.o: FileData.c FileData.h
	$(CC) $(CFLAGS) -c FileData.c
FileIO.o: FileIO.c FileIO.h
	$(CC) $(CFLAGS) -c FileIO.c FileIO.h

SortTools.o: SortTools.c SortTools.h
	$(CC) $(CFLAGS) -c SortTools.c SortTools.h

ExchangeSorts.o: ExchangeSorts.c ExchangeSorts.h
	$(CC) $(CFLAGS) -c ExchangeSorts.c ExchangeSorts.h
SelectionSorts.o: SelectionSorts.c SelectionSorts.h
	$(CC) $(CFLAGS) -c SelectionSorts.c SelectionSorts.h
InsertionSorts.o: InsertionSorts.c InsertionSorts.h
	$(CC) $(CFLAGS) -c InsertionSorts.c InsertionSorts.h
MergeSorts.o: MergeSorts.c MergeSorts.h
	$(CC) $(CFLAGS) -c MergeSorts.c MergeSorts.h
DistributionSorts.o: DistributionSorts.c DistributionSorts.h
	$(CC) $(CFLAGS) -c DistributionSorts.c DistributionSorts.h
ConcurrentSorts.o: ConcurrentSorts.c ConcurrentSorts.h
	$(CC) $(CFLAGS) -c ConcurrentSorts.c ConcurrentSorts.h
HybridSorts.o: HybridSorts.c HybridSorts.h
	$(CC) $(CFLAGS) -c HybridSorts.c HybridSorts.h

UserInterface.o: UserInterface.c UserInterface.h
	$(CC) $(CFLAGS) -c UserInterface.c UserInterface.h
clean:
	rm -f $(PROGS) *.o *~ *.gch *.s
