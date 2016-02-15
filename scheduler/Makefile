all: Scheduler

Scheduler: Scheduler.o Datastore.o Estimate.o
	g++ -o Scheduler Scheduler.o Datastore.o Estimate.o

Scheduler.o: Scheduler.cc
	g++ -c Scheduler.cc Datastore.h

Datastore.o: Datastore.cc
	g++ -c Datastore.cc Estimate.h

Estimate.o: Estimate.cc
	g++ -c Estimate.cc

clean:
	rm -f Scheduler *.o *.gch
