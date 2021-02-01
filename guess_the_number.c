#include<stdio.h>
#include<stdlib.h>
#include<time.h>    
int main()
{
    int number,guess,attempts=1;
    srand(time(0));
    number=rand()%100+1;//rand() is a function to generate a random number and %100+1 is added for generate the random number between 1 to 100.
    printf("Guess the number between 1 to 100\n");
do{
scanf("%d",&guess);
    if(guess>number){
        printf("Lower number please\n");
    }
    else if(guess<number){
        printf("Higher number please\n");
    }
    else{
        printf("You Guess it correct in %d attempts",attempts);
    }
    attempts++;
}while(guess!=number);
    return 0;
}