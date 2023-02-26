#include<stdio.h>
int fact(int);
void main(){
    int x;
    int f;
    printf("enter a number: ");
    scanf("%d",&x);
    f = fact(x);
    printf("factorail is =%d",f);
}
int fact(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n*(fact(n-1));
    }
}