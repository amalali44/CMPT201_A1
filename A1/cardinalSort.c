/*
Name: Amal Ali
Assignment #1
Lab Section: X06L
Lab Instructor’s Name: Dhara wagh
Lecture Instructor’s Name: Ardy RD
purpose: 
*/


# include <stdio.h>
# define ASCII_range 127 - 32

int main(){

    int count[ASCII_range]= {};
    char line[1000];


    // count occurances of each char
    int i = 0;
    while (line[i] != '\0'){
        if (line[i] >= 32 && line[i]<= 127){
            count[line[i]-32]++ ;}
        i++; }


     // print chars in sorted order
     while (i < ASCII_range){
        while (count[i > 0]){
            putchar(i + 32);
            count[i] -= 1;

        }
`
     }

    return 0;
}