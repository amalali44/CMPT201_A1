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
all: cardinalSort countingCovid xTable squeeze 

#Target 1: CardinalSort.c
CardinalSort: CardinalSort.c
	$(CC) $(CFLAGS) CardinalSort.c -o CardinalSort

#Target 2: countingCovid.c
countingCovid: countingCovid.c
	$(CC) $(CFLAGS) countingCovid.c -o countingCovid

#Target 3: xTable.c
xTable: xTable.c
	$(CC) $(CFLAGS) xTable.c -o xTable

 
#Target 4: Squeeze.c
squeeze: squeeze.c
	$(CC) $(CFLAGS) squeeze.c -o squeeze


#Clean: Cleans out all the executable files 
clean:
	 rm *.o 

#Packagae: Condenses all the specified files into a tarball
package:
	tar -czvf $(PACKAGE_NAME) squeeze.c 