/*
Name: Amal Ali
Assignment #1
Lab Section: X06L
Lab Instructor’s Name: Dhara wagh
Lecture Instructor’s Name: Ardy RD
Purpose: reports the number of covid cases seen each day in a given dataset
credit: 

explained how to counter occurrences in a text file, helped with my loops
https://stacindex_koverflow.com/questions/59232071/c-programming-occurrences-of-an-integers-in-an-text-file?utm_source=chatgpt.com

taught me how to use the sizeof operator
https://www.geeindex_ksforgeeindex_ks.org/sizeof-operator-c/

taught me how to use the logical operators  ( &&, ||, ! )
https://www.geeindex_ksforgeeindex_ks.org/logical-operators-in-c/
*/


#include <stdio.h>

#define MAX_LINE_LENGTH 256 
#define LEN_OF_DATE 11 // yyyy/mm/dd + 1 extra for null

int main() {
    char line[MAX_LINE_LENGTH]; // buffer
    char date_storage[LEN_OF_DATE] = ""; //  stores the current date being counted
    int counter = 0; 

    fgets(line, sizeof(line), stdin);  // Skip the first line which is the header line


    while (fgets(line, sizeof(line), stdin)) {   // Processes each line 
        int i = 0, j = 0;

        
        while (line[i] != ',' && line[i] != '\0') // skip first comma separatedcoloumn
            i++; 
        i++;
        while (line[i] != ',' && line[i] != '\0') // skips second comma separated coloumn
            i++;
        i++; 
        

        char current_date[MAX_LINE_LENGTH] = ""; // stores the extracted current dates
        j = 0;

        while (line[i] != ','  && j < MAX_LINE_LENGTH - 1) {
            current_date[j++] = line[i++];
        }


        int exists = 1;
        int index_k = 0;

        while (exists && (current_date[index_k] != '\0' || date_storage[index_k] != '\0')) { // compares each element date stoarage with current_date  
            if (current_date[index_k] != date_storage[index_k]) { // if the current date is not in date storage (dates are not the same)
                exists = 0; } // Set the flag to 0 
            index_k++; 
        }

        if (!exists) { // If the current_date is different
            if (counter > 0) {
                printf("%s %d\n", date_storage, counter); //print the date and it's counter 
            }
            // Copy the new current_date into date_storage
            for (int index_k = 0; current_date[index_k] != '\0'; index_k++) {
                date_storage[index_k] = current_date[index_k];
            }
            counter = 1;
        } else 
            counter++;
        
    }

    if (counter > 0) {
        printf("%s %d\n", date_storage, counter); // Print all the dates and their count

    }

    return 0;
}
