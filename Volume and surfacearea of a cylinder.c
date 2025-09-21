/*
name mark thuranira
reg ct100/g/26254/25
des volume of a cylinder
*/

#include <stdio.h>
#define PI 3.142

//mainfunction

int main()
{
    float radius, height, volume, surfacearea ;
   
    
    printf("enter your radius:");
    scanf("%f",&radius);
    
    printf("\n enter your height:");
    scanf("%f", &height);
    
    volume = PI * radius * radius * height ;
    printf("\nthe volume is %f",volume);
    
    surfacearea = (2 * PI * radius * radius) + (2 * PI * radius * height) ;
    printf("surface area of the cylinder =%f\n", surfacearea) ;
    
    return 0;
}
