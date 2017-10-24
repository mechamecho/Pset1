
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    float change;

    do{
       change=get_float("O hai! How much change is owed? ");
    }
    while(change<0);

int quarter;
int nickels;
int dime;
int penny;
int coins=0;
int cents= lround(change*100);

if(cents%25<cents){
    quarter=cents/25;
    coins+=(quarter);
    cents-=(quarter*25);

}

if(cents%10<cents){
    dime=cents/10;
    coins+=(dime);
    cents-=(dime*10);

}


if(cents%5<cents){
    nickels=cents/5;
    coins+=(nickels);
    cents-=(nickels*5);

}

if(cents%1<cents){
    penny=cents/1;
    coins+=(penny);
    cents-=(penny);

}

if(cents%1==0){
    printf("%i\n", coins);
}

}