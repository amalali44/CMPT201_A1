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

#define max_linelength 300 
#define date_len 11 // yyyy/mm/dd + 1 extra for '\0'

int main() {
    char line[max_linelength]; // buffer
    char date_storage[date_len] = ""; //  stores the current date being counted
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
        
        char current_date[max_linelength] = ""; // stores the extracted current dates
        j = 0;

        while (line[i] != ','  && j < max_linelength - 1) {
            current_date[j++] = line[i++];
        }

        int exists = 1;
        int index_k = 0;

        while (index_k < date_len &&(current_date[index_k] != '\0' || date_storage[index_k] != '\0')) { // loops through the elements in currrent_date and date_stroage strings 
            if (current_date[index_k] != date_storage[index_k]) { // compares each element date stoarage with current_date, if the current date is not in date storage (dates are different)
                exists = 0; } // Set the flag to 0 
            index_k++; // go to next index value
        }

        if (!exists) { // If the current_date is different
            if (counter > 0) {
                printf("%s %d\n", date_storage, counter); //print the date and it's counter 
            }

            // Copy the new current_date into date_storage
            for (int index_k = 0; index_k < date_len ; index_k++) {
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
