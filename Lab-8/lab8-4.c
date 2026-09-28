#include <stdio.h>
int main(){
    float s1,s2,s3;
    printf("Enter side legnths of triangle s1,s2,s3 = ");
      scanf("%f %f %f" , &s1, &s2, &s3 );
    if (s1==s2 && s2==s3 ){
        printf("This is Equilateral traingle\n.");
    }
          else if (s1==s2 || s2==s3 || s3==s1){
            printf("This is isosceles triangle\n.");
        }
            else 
            printf("This is scalene triangle\n.");
    
    
    return 0;
}