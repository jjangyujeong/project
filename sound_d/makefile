CC = gcc
CFLAGS = -g -Wall
OUTPUT = libfuncs.a
OBJFILES = playsound.o
AR = ar
.PHONY: clean

$(OUTPUT): $(OBJFILES)
	$(AR) rv $(OUTPUT) $(OBJFILES)

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJFILES) $(OUTPUT)
