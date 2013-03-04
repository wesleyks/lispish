CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.c parse.c interp.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=interp

all: $(SOURCES) $(EXECUTABLE)
$(EXECUTABLE) : $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o