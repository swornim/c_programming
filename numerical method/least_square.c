#include<stdio.h>
int main(){
    int n,i;
    float x[50],y[50],a,b;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of x: ");
    for(i = 0; i < n; i ++){
        scanf("%f",&x[i]);
    }
    printf("enter the value of y");
    for(i = 0 ; i < n ; i ++){
        scanf("%f",&y[i]);
    }
    float sumx = 0,sumxx = 0 ,sumy = 0 , sumxy = 0 ; 
    for( i = 0; i <n ; i ++){
        sumxx = sumxx + x[i] *x[i];
        sumx = sumx + x[i];
        sumxy = sumxy + x[i]*y[i];
        sumy = sumy + y[i];
    }
    b = (n*sumxy - sumx*sumy)/(n*sumxx - sumx * sumx);
    a = (sumy - b * sumx)/n;
    printf("value of  a = %f and b = %f",a,b);
}