//
// Created by yuval on 06/11/2021.
//

#include <stdio.h>
#include <math.h>


int howManyDigit(int h){
    int cnt = 0.0;
    while(h != 0){
        h = h / 10;
        cnt++;
    }
    return cnt;
}
int isArmstrong(int a){
    int numSum = 0;
    int originalNum = a;
    int temp=1, digit;
    int digitNum = howManyDigit(a);
    while (a != 0){
        temp=1;
        digit = a % 10;
        for (int i = 0; i < digitNum; ++i) {
            temp *= digit ;
        }
        numSum += temp;
        a = a / 10;
    }
    if( originalNum == (int) numSum){
        return 1;
    }
    else{
        return 0;
    }
}

int isPalindrome(int p){
    int reverseNum = 0;
    int originalNum = p;
    while (p > 0){
        reverseNum = (reverseNum * 10) + (p % 10);
        p = p / 10;
    }
    if( originalNum == reverseNum)
        return 1;
    else
        return 0;
}

//int main() {
//    int a = 407;
//    int b = 12321;
//    int c = isArmstrong(a);
//    int d = isArmstrong(b);
//    printf("%d\n", c);
//    printf("%d", d);
//}
