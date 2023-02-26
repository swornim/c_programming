//enter number 1234321
//1234321 is palindrome
#include<stdio.h>
#include<math.h>
int b,count = 1,rem;
int palindrome(int n){
    if(n/10 == 0){
        return n;
    }
    else{
        return(palindrome(n/10)+(n%10)*pow(10,count++));
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
