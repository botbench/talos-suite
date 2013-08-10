INCLUDES=-I/home/talos/sensorDev/include
FLAGS=-fPIC -D_FILE_OFFSET_BITS=64

hitechnic-compass.o:
	gcc $(FLAGS) $(INCLUDES) -shared hitechnic-compass.c -o hitechnic-compass.o
	
common.o:
	gcc $(FLAGS) $(INCLUDES) -shared common.c -o common.o

all: common.o hitechnic-compass.o

clean:
	rm -f *.o
