
#include <stdio.h>
#include <cs50.h>

int main(void){
    int height;

    do{
       height=get_int("Height: ");
    }
    while(height<0||height>23);

    for(int i=1; i<=height; i++){
        for(int j=1; j<=(height-i); j++){
            printf(" ");
        }
                for(int j=1; j<=i+1; j++){
            printf("#");
        }
        printf("\n");
    }

}