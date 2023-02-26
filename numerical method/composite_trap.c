//a = 1 b = 2 n = 100
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
    h = (b-a)/n;
    float sum;
    for(i = 1 ; i < n-1;i++){
        sum = sum+ f(a + i * h); 
    }
    I = h/2 *(f(a)+f(b) + 2 * sum);
    printf("value of I = %f",I);
}