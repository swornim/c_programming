//WAP to read a m*n order matrix and increase each element by the power of 5 and display the elements 
#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c = 1;
    printf("enter rows and column number");
    scanf("%d%d",&a,&b);
    int d[a][b];
    for(int i = 0; i < a;i++){
        for(int j = 0; j < b;j++){
            printf("enter a number");
            scanf("%d",&d[i][j]);
        }
    }
    for(int i = 0 ; i < a; i++){
        for(int j = 0;j < b;j++){
            d[i][j] = pow(d[i][j],5);
            printf("%d\t",d[i][j]);
            if(j == b-1){
                printf("\n");
            }
        }
    }
}