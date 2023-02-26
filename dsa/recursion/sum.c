//enter number of terms 5
// sum = 15
#include<stdio.h>
int sum(int n){
    if(n == 0){
        return 0;
    }
    else{
        return (sum(n-1))+n;
    }
}
int main(){
    int x = 0,n;
    printf("enter number of terms ");
    scanf("%d",&n);
    printf("sum = %d \n",sum(n));

}