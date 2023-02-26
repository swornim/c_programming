//a = 1 b = 2
#include<stdio.h>
float f(float x){
    return (1 + x*x*x);
}
int main(){
    int i;
    float h,I,a,b;
    printf("enter a and b: "); 
    scanf("%f%f",&a,&b);
    h = (b-a)/2;
    I = h/3 * (f(a)+ 4*f((a+b)/2)+f(b));
    printf("value of I = %f",I);
}