main:http_server.o main.o ../lib/mongoose.o
	g++ -o main http_server.o main.o ../lib/mongoose.o
main.o:main.cpp
	g++ -c main.cpp
http_server.o:http_server.h http_server.cpp
	g++ -c http_server.cpp

.PHONY:clean

clean:
	rm -rf *.o main