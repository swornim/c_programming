#include<stdio.h>
float f(float x){
    return (1 + x*x*x);
}
int main(){
    int i;
    float n;
    float h,I,a,b;
    printf("enter a and b: "); 
    scanf("%f%f",&a,&b);
    printf("enter value of n ");
    scanf("%f",&n);
    h = (b-a)/3;
    I = 3*h/8 * (f(a)+3*(f(a+h)+f(a+2*h)) +f(b));
    printf("value of I = %f",I);
}