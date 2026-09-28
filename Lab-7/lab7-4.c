#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
scanf("%c" , &ch);
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
printf("Vowel");
else if (ch >= 'a' && ch<= 'z') 
printf("Lowercase consonant.");
else 
printf("Invalid character.");
return 0;
}