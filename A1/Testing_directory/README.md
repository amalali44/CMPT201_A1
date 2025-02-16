# Name: Amal Ali
# Assignment #1
# Lab Section: X06L
# Lab Instructor’s Name: Dhara wagh
# Lecture Instructor’s Name: Ardy RD


Program 1 squeeze.c :
-> This program compresses repeating characters in a string by replacing them with the char followed by its count. If a character repeats more than 9 times, the program splits it into multiple groups of 9 or fewer. Exits with crtl+d

Example input: aaaaaabbcdd
Expected output: a6b2cd2


#------------------------------------------------------------------------------------

program 2 xTable.c :
-> This program prints the result of a math equation ((x^4 / y^4) + sqrt(y)) in tabular form for integers countng from 5 to 100, in steps of five. 

Example input: ./xTable
Expected output: 

(the top row and column extend to 100)

         +     5       10      15   .   .   . 
        5     3.2     18.2    83.2
        10    3.2     4.2     8.2
        15    3.9     4.1     4.9
        .
        .
        .


#------------------------------------------------------------------------------------

Program 3: CountingCovid.c : 
-> counts the number of COVID-19 cases per date from a dataset. It reads data from standard input, ignores the header line, extracts the third column (after 2 commas) that has the date reported, and prints the date along with the number of cases on that date. Exits with crtl+d

Example input: ./countingCovid < covidData_100.csv
Expected output: 
2020/03/05 1
2020/03/07 1
2020/03/08 1
2020/03/09 4
2020/03/10 9
2020/03/11 7
2020/03/12 3
2020/03/13 8
2020/03/14 22
2020/03/15 11
2020/03/16 24
2020/03/17 8

#------------------------------------------------------------------------------------


Program 4: CardinalSort.c
-> This program sorts chars (including spcases, punctuation and capital letters) in ascending order based on their ASCII value. Exits with crtl+d.

Example input: $hello cmpt 201
Expected output:   012cehllmopt