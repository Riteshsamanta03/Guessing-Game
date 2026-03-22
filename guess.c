#include<stdio.h>
#include<stdlib.h>  
#include<time.h>

int main(){

    srand(time(0)); // Seed the random number generator with the current time
    int secret_number = rand() % 100 + 1; // Generating a random number between 1 and 100
    int guess, attempts = 0;
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 to 100. Can you guess it?\n");

    while(1){
        printf("Enter your guessing number:");
        scanf("%d", &guess);
        attempts++;
            if(guess == secret_number){
                printf("Congratulations! You've guessed the number %d in %d attempts!\n", secret_number, attempts);
                break;
            } 
            else if(guess < secret_number){
               printf("Too low! Try again.\n");
            } 
            else {
               printf("Too high! Try again.\n");
            } 
    }
     printf("Game Over!\n");


    return 0;
}