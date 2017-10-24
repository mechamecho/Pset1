//standard input output library
#include <stdio.h>
#include <cs50.h>


//we need the main method in c
//void here means it takes no arguments

int main(void){

    //prints to the screen and the f stands for format

    int minutes= get_int("Minutes: ");
    int bottles= minutes*12;
    printf("Bottles: %i", bottles);
    printf("\n");

}
