//wap to read n array and display number of +ve -ve and zero seperately
#include<stdio.h>
void main(){
    int a[50],i,n,pcount = 0,ncount = 0,count = 0;
    printf("enter size of array ");
    scanf("%d",&n);
    for(i = 0;i<n;i++){
        printf("> ");
        scanf("%d",&a[i]);
    }
    for(int j = 0;j<n;j++){
        if(a[j] == 0){
            count++;
        }else if(a[j] > 0){
            pcount++;
        }
        else{
            ncount++;
        }
    }
    printf("number of +ve no. = %d\n number of -ve no. = %d\n number of 0 = %d",pcount,ncount,count);
}