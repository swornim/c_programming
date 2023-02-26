//enter number of terms 5
// 0    1   1   2   3
#include<stdio.h>
int fibo(int i){
    if(i ==0)
        return 0;
    else if(i == 1)
        return 1;
    else{
        return (fibo(i-1)+fibo(i-2));
    }
}

int main(){
    int n,sum = 0;
    printf("enter number of terms ");
    scanf("%d",&n);
    for(int i = 0 ; i < n; i++){
        printf("%d\t",fibo(i));
    }
}