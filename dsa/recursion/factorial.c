#include<stdio.h>
int fact(int n){
    if(n == 0){
        return 1;
    }
    else{
        return (fact(n-1))*n;
    }
}
int main(){
    int x = 0,n;
    printf("enter number of terms ");
    scanf("%d",&n);
    printf("fact = %d \n",fact(n));

}