mongoose.o:common/mongoose.c common/mongoose.h
	g++ -c common/mongoose.c
	cp mongoose.o lib/
	rm -rf mongoose.o

.PHONY:clean

clean:
	rm -rf *.o lib/*.o