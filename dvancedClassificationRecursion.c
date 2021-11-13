//
// Created by yuval on 06/11/2021.
//

#include <stdio.h>


int howManyDigit(int h){
    int tmp = h, cnt =0;
    while (tmp != 0) {
        cnt++;
        tmp = tmp/10;
    }
    return cnt;
}

int powe (int a, int b){
    int tmp = 1;
    for (int i = 0; i < b; ++i) {
        tmp *= a;
    }
    return tmp;
}

int Amstrong(int a, int len){
    if( a == 0){
        return 0;
    }
    return powe(a % 10, len) + Amstrong(a/10, len);
}

int isArmstrong(int a){
    int cnt = howManyDigit(a);
    if (Amstrong(a, cnt) == a){
        return 1;
    }
    return 0;
}

int isPalindrome(int p){
    if (p % 10 == p || p == 0){
        return 1;
    }
    else{
        int originalNum = p;
        int cnt = howManyDigit(p);
        int arr[cnt];
        for (int i = 0; i < cnt; ++i) {
            arr[i] = (p%10);
            p = p / 10;
        }
        if (arr[0] != arr[cnt-1]){
            return 0;
        }
        else{
            originalNum = originalNum / 10;
            int cnt2 = howManyDigit(originalNum);
            originalNum = originalNum - (arr[cnt-1])* powe(10, cnt2-1);
            if(cnt - howManyDigit(originalNum) > 2)
                return 0;
            else
                return isPalindrome(originalNum);
        }
    }

}

//int main(){
//    int num = 1061;
//    int a = isPalindrome(num);
//    printf("the number %d is polindrum, if the number return is 1", num);
//    printf("\n%d\n", a);
//    int c = 407;
//    int d = isArmstrong(c);
//    printf("%d", d);
//}
