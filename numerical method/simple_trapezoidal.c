//a = 1 , b = 2
// I = 5.500000
#include<stdio.h>
float f(float x){
    return (1 + x*x*x);
}
int main(){
    int i;
    float h,I,a,b;
    printf("enter a and b: "); 
    scanf("%f%f",&a,&b);
    h = b-a;
    I = h/2*(f(a)+f(b));
    printf("value of I = %f",I);
}