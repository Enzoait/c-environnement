#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int number_to_guess = rand() % 100;
    int guess;
    int a=0;
    printf("I have in mind a number in between 1 and 100, can you find it?\n");
    while (a==0) {
        scanf("%d",&guess);
        if (guess>=0 && guess<=100){
            if (guess > number_to_guess){
                printf("The number to guess is lower\n");
            }
            else if (guess < number_to_guess){
                printf("The number to guess is higher\n");
            }
            else{
                a=1;
                printf("You just found the number , it was indeed %d ", guess);
                exit(0);
            }
        }
        else{
            printf("Please enter a valid number \n");
            exit(1);
        }
    }
}
