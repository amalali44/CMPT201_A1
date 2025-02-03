/*------------------------------------------
Student’s Name: Amal Ali
Assignment #1
Lab Section: X06L
Lab Instructor’s Name: Dhara Wagh
Lecture Instructor’s Name: Ardy RD
--------------------------------------------*/
#include <stdio.h>

void squeeze()
{
    char string_input[100];
    printf("Enter a sequence of letters: ");
    scanf("%s", string_input);

    int counter = 1;
    char prev_char = string_input[0];

    int i = 1;
    while (string_input[i] != 0)
    {
        if (string_input[i] == prev_char)
        {
            counter++;
            if (counter == 9)
            {
                printf("%c%d", prev_char, counter);
                counter = 0;
            }
        }
        else
        {
            if (counter > 1)
                printf("%c%d", prev_char, counter);
            
            if (counter == 1)
                printf("%c", prev_char);
        

            prev_char = string_input[i];
            counter = 1;
        }
        i++;
    } 

    if (counter > 1)
        printf("%c%d", prev_char, counter);
    if (counter == 1)
        printf("%c", prev_char);

    printf("\n");
    
}

int main()
{
    squeeze();
    return 0;
}