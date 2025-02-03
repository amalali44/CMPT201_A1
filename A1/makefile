# ID BOX:
# Name: Amal
# Lab section: X06L
# Due date: January 26
# File purpose: To compile several C source codes with one command


# Variables/ Macros:
CC = gcc 
CFLAGS= -Wall -std=c99
PACKAGE_NAME = cmpt201_A_1_AA.tar.gz
LDFLAGS = -lm

#all: cardinalSort countingCovid xTable squeeze
#	$(CC) $(CFLAGS) cardinalSort.c countingCovid.c xTable.c squeeze.c -o cardinalSort countingCovid xTable squeeze

#Target 1: cardinalSort.c
#CardinalSort: cardinalSort.c
#	$(CC) $(CFLAGS) cardinalSort.c -o cardinalSort

#Target 2: countingCovid.c
#countingCovid: countingCovid.c
#	$(CC) $(CFLAGS) countingCovid.c -o countingCovid

#Target 3: xTable.c
#xTable: xTable.c
#	$(CC) $(CFLAGS) xTable.c -o xTable

 
#Target 4: Squeeze.c
squeeze: squeeze.c
	$(CC) $(CFLAGS) squeeze.c -o squeeze

# Test: Tests all programs
Testing: testsqueeze
testsqueeze:
	./squeeze < testsqueezeIn.txt > testsqueezeOut.txt 
	diff testsqueezeOut.txt correctsqueeze.txt 

#Clean: Cleans out all the executable files 
clean:
	 rm *.o 

#Packagae: Condenses all the specified files into a tarball
package:
	tar -czvf $(PACKAGE_NAME) squeeze.c 