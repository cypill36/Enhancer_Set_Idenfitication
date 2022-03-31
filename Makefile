
# use ctrl+v+Tab to tab before the compilation commands

CC = gcc
CFLAGS = -std=c11 -g -Wall -Wextra -Wpedantic -Wconversion -pthread -lm

all: enhancer_classifier

enhancer_classifier: enhancer_classifier.o
	$(CC) $(CFLAGS) enhancer_classifier.o -o enhancer_classifier

clean:
	rm *.o enhancer_classifier

