CC = gcc
CFLAGS = -Wall
LFLAGS = -lm

OBJECTS = main.o list.o

default: $(OBJECTS)
	$(CC) $(CFLAGS) -o list $(OBJECTS) $(LFLAGS)
	make clean

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJECTS)