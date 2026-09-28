#include <stdio.h>
int main (){
    int a;
    printf("Enter integer = ");
    scanf("%d" , &a);

    if (a > 0) {
        printf("positive");
    }
    else if (a < 0) {
        printf("Negative");
        } 
        else {
            printf("Zero");
        }
        return 0;
    
}