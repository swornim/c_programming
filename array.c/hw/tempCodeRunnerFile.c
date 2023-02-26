//wap that ask number of inputs and add even and odd number seperately
#include<stdio.h>
void main(){
    int n,a[50],i,e = 0,o = 0;
    printf("number of inputs ");
    scanf("%d",&n);
    for(i = 0; i < n;i++){
        scanf("%d",&a[i]);
    }
    for(int j = 0; j<n;j++){
        if(a[j]%2 == 0){
            e = e + a[j];
        }else{
            o = o + a[j];
        }
    }
    printf("sum of odd = %d\n sum of even = %d",o,e);
}