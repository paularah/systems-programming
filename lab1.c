#include<stdio.h>
#include<string.h>
#include <stdlib.h>

void exercise1(){
   int upperBound = 0 , evenSum = 0, oddSum = 0, absoluteDiff = 0;
   printf ("Input your upper bound ");
   scanf("%d", &upperBound);
   while(upperBound <= 0){
       printf("Enter an upper bound greater than zero");
       scanf("%d", &upperBound);
   }
   for (int i = 0; i <= upperBound; i++){
       if (i%2 != 0){
           oddSum += i;
       }else
       {
           evenSum += i;
       }
   }
   absoluteDiff = evenSum - oddSum;
   if (absoluteDiff < 0){
       absoluteDiff *= -1;
   }
   float third = evenSum/3.0, fifth = oddSum/5.0;
   printf("\nthe sum of odd numbers is %d", oddSum);
   printf("\nthe sum of even numbers is %d ", evenSum);
   printf("\nThe absolute difference is %d ", absoluteDiff);
   printf("\nA third of the sum of even numbers is %f", third);
   printf("\nA fifth of the sum of odd numbers is %f \n", fifth); 
}

void exercise2(){
    int digitCount(int num) {
        long long n = (long)num;
        int count = 0;
        while (n != 0) {
            n /= 10;   
            ++count;
        }
        return count;
    };

    int userInput = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &userInput);
    int userInputLength = digitCount(userInput);
    printf("%d", userInputLength);

    while (userInputLength > 10){
        printf("Input a number less 10 digits");
        scanf("%d", &userInput);
    }
    char userInputString[10];
    int final = 0;
    sprintf(userInputString, "%d", userInput);
    for (int i = 0; i < strlen(userInputString); i++){
        final += userInputString[i] - '0';
    }
    // printf("The sum of the digits of your input is  %d ", final);
}

void main(){
    exercise1();
    exercise2();
}



