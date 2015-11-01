# Christian De Schryver 2014

CC=g++
CFLAGS=-g -Wall


all:
	$(CC) $(CFLAGS) -L$(SYSTEMC_LIB_DIR) -lsystemc -o main main.cpp

clean:	
	rm -f *.o main Output.bmp
