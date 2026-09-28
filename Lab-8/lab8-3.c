#include <stdio.h>
int main(){
    float choice;
    printf("Enter you obtained percentage : ");
    scanf("%f" , &choice);
    if(choice>=90){
        printf("Your grade is = A");
     } else if (choice>=80 && choice <90){
        printf("Your grade is = B\n");
     } else if (choice>=70 && choice <80){
        printf("Your grade is = C\n");
     } else if (choice>=60 && choice <70){
        printf("Your grade is = D\n");
     } else 
        printf("your grade is = F");
     
     return 0;
    
}