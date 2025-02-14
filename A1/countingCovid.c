/*
Name: Amal Ali
Assignment #1
Lab Section: X06L
Lab Instructor’s Name: Dhara wagh
Lecture Instructor’s Name: Ardy RD
purpose: 

credit: 
*/

# include <stdio.h>

#include <stdlib.h>
#include <string.h>


#define MAX_LINE 1024

// A simple struct to store zone counts
typedef struct {
    char zone[50]; // Alberta Health Zone names
    int count;
} ZoneCount;

#define MAX_ZONES 100  // Adjust based on expected unique zones

int main() {
   
    char line[MAX_LINE];
    ZoneCount zones[MAX_ZONES];
    int zoneCount = 0;

    fgets(line, MAX_LINE, stdin); // Skip header line

    while (fgets(line, MAX_LINE, stdin)) {
        char *token = strtok(line, ","); // Skip index column
        token = strtok(NULL, ",");       // Skip "Date reported" column
        token = strtok(NULL, ",");       // Extract "Alberta Health Zone"

        if (token) {
            // Trim and store zone
            char zone[50];
            strncpy(zone, token, 49);
            zone[49] = '\0';

            // Check if zone already exists in our array
            int found = 0;
            for (int i = 0; i < zoneCount; i++) {
                if (strcmp(zones[i].zone, zone) == 0) {
                    zones[i].count++;
                    found = 1;
                    break;
                }
            }

            // If not found, add new entry
            if (!found && zoneCount < MAX_ZONES) {
                strcpy(zones[zoneCount].zone, zone);
                zones[zoneCount].count = 1;
                zoneCount++;
            }
        }
    }

    fclose(stdin);

    // Print results
    for (int i = 0; i < zoneCount; i++) {
        printf("%s %d\n", zones[i].zone, zones[i].count);
    }

    return 0;
}
