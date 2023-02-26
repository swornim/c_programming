#include<stdio.h>
int fibo(int);
void main(){
    int n = 8;
    printf("enter a number of series: ");
    // scanf("%d",&n);
    for(int i = 0; i <= n; i++){
        printf("%d\t",fibo(i));
    }
}
int fibo(int x){
    if(x ==0){
        return 0;
    }
    else if(x ==1){
        return 1;
    }
    else{
        return fibo(x-1)+fibo(x-2);
    }
}