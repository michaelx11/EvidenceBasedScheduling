CFLAGS=-I /usr/include/libmicrohttpd.h

all: WebServer.o LandingPageHandler.o
	g++ -o Server main.cc WebServer.o LandingPageHandler.o -lmicrohttpd $(CFLAGS)

LandingPageHandler.o: LandingPageHandler.cc
	g++ -c LandingPageHandler.cc -lmicrohttpd $(CFLAGS)

WebServer.o: WebServer.cc
	g++ -c WebServer.cc -lmicrohttpd $(CFLAGS)

clean:
	rm -f Server *.o *.gch
