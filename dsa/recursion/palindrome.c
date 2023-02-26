//enter number 1234321
//1234321 is palindrome
#include<stdio.h>
int b,sum = 0,rem;
int palindrome(int n){
    if(n > 0){
        rem = n%10;
        sum = sum *10 + rem;
        n = n/10;
        return palindrome(n);
    }
    else{
        return sum;
    }
}
int main(){
    int n,a;
    printf("enter number ");
    scanf("%d",&n);
    a = palindrome(n);
    if(n == a){
        printf("%d is palindrome",a);
    }
    else{
        printf("%d is not palindrome",a);
    }
}
