/*------------------------------------------
Student’s Name: Amal Ali
Assignment #1
Lab Section: X06L
Lab Instructor’s Name: Dhara Wagh
Lecture Instructor’s Name: Ardy RD
Purpose: 
credits: 

This page helped me with the while loop declaration because NULL wasnt working
https://www.geeksforgeeks.org/how-to-empty-a-char-array-in-c/ 

and this to help with the fgets syntax:
https://www.digitalocean.com/community/tutorials/fgets-and-gets-in-c-programming
--------------------------------------------*/
#include <stdio.h>

void squeeze()
{
    char string_input[100];
    printf("Enter a sequence of letters: ");
    fgets(string_input, 100, stdin);

    int counter = 1;
    char prev_char = string_input[0];

    int index = 1;
    while (string_input[index] != 0) // while there are numbers inputted, run the following:
    {
        if (string_input[index] == prev_char){
            counter++;
            if (counter == 9){
                printf("%c%d", prev_char, counter);
                counter = 0;
            }}
        else{
            if (counter > 1)
                printf("%c%d", prev_char, counter);
            
            if (counter == 1)
                printf("%c", prev_char);
        
            prev_char = string_input[index];
            counter = 1;
        }
        index++;
    } 
    // for the last value that broke the loop:
    if (counter > 1)
        printf("%c%d", prev_char, counter);
    if (counter == 1)
        printf("%c", prev_char);

    printf("\n");
}

int main(){
    squeeze();
    return 0;
}