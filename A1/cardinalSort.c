/*
Name: Amal Ali
Assignment #1
Lab Section: X06L
Lab Instructor’s Name: Dhara wagh
Lecture Instructor’s Name: Ardy RD
purpose: to print inputted characters in ascending order by their ASCII value

credit: 
ASCII table used, made it simple to figure out the range of numbers needed:
https://www.ascii-code.com/

*/


#include <stdio.h>

#define ascii_table_2 (126 - 32 + 1)  // Total characters

int main() {
    int count[ascii_table_2] = {0}; // Array to store character frequencies
    char line[1000]; // Buffer to store input lines

    while (fgets(line, 1000, stdin) != NULL) {
        // Count occurrences of each character
        int i = 0;
        while (line[i] != '\0') {
            if (line[i] >= 32 && line[i] <= 126) {
                count[line[i] - 32]++;
            }
            i++;
        }

        // Print characters in sorted order
        int j = 0;
        while (j < ascii_table_2) {
            while (count[j] > 0) {
                putchar(j + 32);
                count[j] -= 1;
            }
            j++;
        }
        
        printf("\n");

        // Reset the count array for the next line
        while (i < ascii_table_2) {
            count[i] = 0;
            i++;
        }
    }

    return 0;
}
