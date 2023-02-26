//WAP to read n numbers in an array.
//Pass this array to a function which finds and displays the sum of even numbers only and the product of odd numbers only.
#include<stdio.h>
void sum(int d[],int );
void main(){
    int i,n;
    printf("enter number of terms: ");
    scanf("%d",&n);
    int d[n];
    for(i = 0; i < n; i++){
        printf("enter a number: ");
        scanf("%d",&d[i]);
    }
    
    sum(d,n);
}
void sum(int d[],int x){
    int sum = 0,prod = 1;
    for(int i = 0 ; i < x; i++){
        if(d[i]%2 == 0){
            sum = sum + d[i];
        }else{
            prod = prod * d[i];
        }
    }
    printf("sum = %d",sum);
    printf("product = %d",prod);
}