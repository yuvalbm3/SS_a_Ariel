//
// Created by yuval on 06/11/2021.
//
#include <stdio.h>
#include <math.h>
// 0 false
// 1 true

int factorial(int f){
    int n=1;
    if(f==0){
        return 1;
    }
    for (int i = 1; i <= f ; ++i) {
        n*=i;
    }
    return n;
}

int isPrime(int p) {
    if (p <= 1) {
        return 0;
    } else if (p == 2) {
        return 1;
    } else if (p > 2) {
        for (int i = 2; i < p / 2; i++) {
            if ((p % i) == 0) {
                return 0;
            }
        }
    }
    return 1;
}

int isStrong(int s){
    int factorialSum = 0;
    int originalNum = s;
    int b = 0;
    while ( s != 0){
        b = s % 10;
        factorialSum += factorial(b);
        s = s / 10;
    }
    if(factorialSum == originalNum)
        return 1;
    else
        return 0;

}

//
//int main() {
////    int c = isStrong(145);
////    printf("%d", c);
////    int a = isPrime(2);
////
////    if (a == 1) {
////        printf("%d is prime number \n", 2 );
////    } else {
////        printf("%d isn't prime number \n", 2);
////    }
////    int b = isPrime(7);
////    if (b == 1) {
////        printf("%d is prime number \n", 7);
////    } else {
////        printf("%d isn't prime number \n", 7);
////    }
////    int c = isPrime(18);
////    if (c == 1) {
////        printf("%d is prime number \n", 18);
////    } else {
////        printf("%d isn't prime number \n", 18);
////    }
////    int d = isPrime(279);
////    if (d == 1) {
////        printf("%d is prime number \n", 279);
////    } else {
////        printf("%d isn't prime number \n", 279);
////    }
//}

