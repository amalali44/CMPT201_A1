/*
Name: Amal Ali
Assignment #1
Lab Section: X06L
Lab Instructor’s Name: Dhara wagh
Lecture Instructor’s Name: Ardy RD
Purpose: Calculates and prints the result of a math equation in tabular form for integeras countng from 5 to 100
*/

#include <stdio.h>
#include <math.h>

int main() {
    // Print column headers
    printf(" + ");
    int col = 5;
    while (col <= 100) {
        printf("\t%d", col);
        col += 5;
    }
    printf("\n");

    // Print table with calculations
    int row = 5;
    while (row <= 100) {
        printf("%d\t", row);  // Row header
        
        col = 5;  // Reset col for each row
        while (col <= 100) {
            double eqn = (pow(col, 4) / pow(row, 4)) + sqrt(row);
            printf("%.1f\t", eqn);
            col += 5;
        }
        printf("\n");
        row += 5;
    }

    return 0;
}

    
    
    
