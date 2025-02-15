/*
Name: Amal Ali
Assignment #1
Lab Section: X06L
Lab Instructor’s Name: Dhara wagh
Lecture Instructor’s Name: Ardy RD
Purpose: reports the number of covid cases seen each day in a given dataset
credit: 

explained how to count occurrences in a text file, helped with my loops
https://stackoverflow.com/questions/59232071/c-programming-occurrences-of-an-integers-in-an-text-file?utm_source=chatgpt.com

taught me how to use the sizeof operator
https://www.geeksforgeeks.org/sizeof-operator-c/

taught me how to use the logical operators  ( &&, ||, ! )
https://www.geeksforgeeks.org/logical-operators-in-c/
*/


#include <stdio.h>

#define max_dates 300  
#define len_of_date 11     

int main() {
    // char dates[max_dates][len_of_date];
    int count[max_dates] = {}; 
    int date_count = 0;
    char line[256];
    char date[len_of_date];

    fgets(line, 256, stdin); // Skip the fist line which is the header

    // Read each subsequent line
    while (fgets(line, 256, stdin)) {
        int i = 0, j = 0;

        while (line[i] != ',' && line[i] != '\0') // Skip the first field
            i++;
        i++; 

        while (line[i] != ',' && line[i] != '\0') // Skip the second field
            i++;
        i++;


        // use the third field that contains the date
        j = 0;
        while (line[i] != ',' && j < len_of_date - 1) {
            date[j++] = line[i++];
        }
   

        // // Check if the date already exists
        // int exists = 0;
        // int k = 0;
        // while (k < date_count && !exists) {
            
        //     int a = 0;
        //     while (a < len_of_date && dates[k][a] != '\0' && date[a] == dates[k][a]) {
        //         a++; }

        //     if ( dates[k][a] == '\0') {  
        //         count[k]++; // If the entire string matches, increment the count
        //         exists = 1; }
        //     k++;
        // }


        // // If the date doesn't exist, add it to the date array
        // if (!exists && date_count < max_dates) {
        //     int m = 0;

        //     while (m < len_of_date && date[m]) {
        //         dates[date_count][m] = date[m];
        //         m++;
        //     }
        //     dates[date_count][m] = '\0'; // Null-terminate the new date
        //     count[date_count] = 1;
        //     date_count++;
        // }
    }

    // Print the dates and their count
    int i = 0;
    while (i < date_count) {
        //printf("%s %d\n", dates[i], count[i]);
        i++;
    }

    return 0;
}
