# ID BOX:
# Name: Amal
# Lab section: X06L
# Due date: January 26
# File purpose: To compile several C source codes with one command


# Variables/ Macros:
CC = gcc 
CFLAGS= -Wall -std=c99
PACKAGE_NAME = cmpt201_A1_AA.tar.gz
LDFLAGS = -lm

all: cardinalSort countingCovid xTable squeeze
	$(CC) $(CFLAGS) cardinalSort.c countingCovid.c xTable.c squeeze.c -o cardinalSort countingCovid xTable squeeze

#Target 1: cardinalSort.c
CardinalSort: cardinalSort.c
	$(CC) $(CFLAGS) cardinalSort.c -o cardinalSort

#Target 2: countingCovid.c
countingCovid: countingCovid.c
	$(CC) $(CFLAGS) countingCovid.c -o countingCovid

#Target 3: xTable.c
xTable: xTable.c
	$(CC) $(CFLAGS) xTable.c -o xTable $(LDFLAGS)

 
#Target 4: Squeeze.c
squeeze: squeeze.c
	$(CC) $(CFLAGS) squeeze.c -o squeeze

# Test: Tests all programs
Testing: testsqueeze testcardinalSort testxTable testcountingCovid
testsqueeze:
	./squeeze < testsqueezeIn.txt > testsqueezeOut.txt 
	diff testsqueezeOut.txt correctsqueeze.txt

testxTable:
	./xTable < testxTableIn.txt > testxTableOut.txt
	diff testxTableOut.txt correctxTable.txt 

testcountingCovid:
	./countingCovid < testcountingCovidIn.txt > testcountingCovidOut.txt
	diff testcountingCovidOut.txt correctcountingCovid.txt

testcardinalSort:
	./cardinalSort < testcardinalSortIn.txt > testcardinalSortOut.txt
	diff testcardinalSortOut.txt correctcardinalSort.txt

#Clean: Cleans out all the executable files 
clean:
	 rm *.o 

#Packagae: Condenses all the specified files into a tarball
package:
	tar -czvf $(PACKAGE_NAME) squeeze.c xTable.c countingCovid.c cardinalSort.c /testing_directory

