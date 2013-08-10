INCLUDES=-I/home/talos/sensorDev/include
FLAGS=-D_FILE_OFFSET_BITS=64

common.o:
	gcc $(FLAGS) $(INCLUDES) -shared common.c -o common.o

all: common.o

clean:
	rm -f *.o
