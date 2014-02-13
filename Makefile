CC = g++
WARNINGS = -ansi -pedantic -Wall -Wextra -D__USE_FIXED_PROTOTYPES__ -std=c++98
CFLAGS = $(WARNINGS)
OBJ = main.o stack.o list.o 
#LIBS = -lncurses
APPLICATION_NAME = rpn

.PHONY : all rebuild clean

all : $(APPLICATION_NAME)

rebuild :
	make clean
	make all

$(APPLICATION_NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(APPLICATION_NAME) $(LIBS)

main.o : main.cpp
	$(CC) $(CFLAGS) -c main.cpp $(LIBS)

stack.o : stack.cpp stack.h list.h
	$(CC) $(CFLAGS) -c stack.cpp $(LIBS)

list.o : list.cpp list.h
	$(CC) $(CFLAGS) -c list.cpp $(LIBS)

clean :
	rm -f $(APPLICATION_NAME) $(OBJ)
