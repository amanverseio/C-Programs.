#include <stdio.h>
int main (){
   float Celsius , Fahrenheit;
   printf("Enter celsius value = ");
   scanf("%f" , &Celsius);
   
   Fahrenheit = (Celsius*9/5 + 32);
   printf("Tempreature in fehrenheit = %f\n" , Fahrenheit);
   return 0 ;
}