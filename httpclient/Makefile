main:http_client.o main.o ../lib/mongoose.o
	g++ -o main http_client.o main.o ../lib/mongoose.o
main.o:main.cpp
	g++ -c main.cpp
http_client.o:http_client.h http_client.cpp
	g++ -c http_client.cpp

.PHONY:clean

clean:
	rm -rf *.o main