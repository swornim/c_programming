//WAP that read marks of C-Programming of n students and print out the least 5 of them[bottom 5]
#include<stdio.h>
void main(){
    int a,max,min,b,i,j;
    printf("number of terms: ");
    scanf("%d",&a);
    int n[54];
    printf("enter a number: ");
    for (i = 0; i < a; i++)
    {
        scanf("%d",&n[i]);
    }
    max = n[0];
    min = n[0];
    for(j = 0; j < a;j++){
        b = 0;
        b = n[j]/n[++j];
        if(b > 1){
            max = n[j];
        }
        if( b < 1){
            min = n[j];
        }
    }
    printf("max = %d",max);
    printf("min = %d",min); 
}
//wrong