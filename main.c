#include <stdio.h>
#include "NumClass.h"


/*The Armstrong numbers are:
The Palindromes are:
The Prime numbers are:
The Strong numbers are:
*/

int main(int argc, char *argv[]){
    int x,y;
    printf("Enter 2 integers:\n");
    scanf("%d %d", &x, &y);
    while(x <= 0 && y <= 0){
        printf("Enter 2 *positive* integers:\n");
        scanf("%d, %d", &x, &y);
    }
    int min, max;
    if(x<y){
        min = x;
        max = y;
    }
    else{
        min = y;
        max = x;
    }
    printf("\nThe Armstrong numbers are: ");
    for (int i = min; i <= max; ++i) {
        if(isArmstrong(i) == 1){
            printf("%d ", i);
        }
    }
    printf("The Palindromes are: ");
    for (int i = min; i <= max; ++i) {
        if(isPalindrome(i) == 1){
            printf("%d ", i);
        }
    }
    printf("\nThe Prime numbers are: ");
    for (int i = min; i <= max; ++i) {
        if(isPrime(i) == 1){
            printf("%d ", i);
        }
    }
    printf("\nThe Strong numbers are: ");
    for (int i = min; i <= max; ++i) {
        if(isStrong(i) == 1){
            printf("%d ", i);
        }
    }
}

