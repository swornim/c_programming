#include<stdio.h>
#include<math.h>
float f(float x){
    return (1 + pow(x,3));
}
int main(){
    int i;
    int n;
    float h,I,a,b;
    printf("enter a and b: "); 
    scanf("%f%f",&a,&b);
    printf("enter value of n ");
    scanf("%d",&n);
    h = (b-a)/n;
    float sum_even = 0,sum_odd = 0;
    for(i = 1 ; i < n-1;i++ ){
        if(i %2 == 0){
            sum_even = sum_even + f(a + i*h);
        }
        else{
            sum_odd = sum_odd + f(a+i*h);
        }
    }
    I = h/3 * (f(a)+4 * (sum_odd )+2 *(sum_even)+f(b));
    printf("value of I = %f",I);
    return 0;
}