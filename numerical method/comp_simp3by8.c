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
    float sum_3 = 0,sum = 0;
    for(i = 1 ; i < n-1;i++ ){
        if(i %3 == 0){
            sum_3 = sum_3 + f(a + i*h);
        }
        else{
            sum= sum+ f(a+i*h);
        }
    }
    I = 3*h/8* (f(a)+3*(sum)+2*(sum_3)+f(b));
    printf("value of I = %f",I);
}