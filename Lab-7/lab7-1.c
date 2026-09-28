// Write a program to input integer , check whether it is even , odd . usnig if and else.
#include <stdio.h>
int main (){
    int a;
    printf("Enter number : ");
    scanf("%d" , &a);

    if (a % 2 == 0){
        printf("%d is even" , a);
    } else {
        printf("%d is odd " , a);
    }
    return 0;
}