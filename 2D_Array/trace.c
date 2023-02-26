//WAP to find the trace(sum of diagonal) of a matrix, read the order and number from user
#include<stdio.h>
void main(){
    int a,b,sum = 0;
    printf("enter a number of rows and column: ");
    scanf("%d%d",&a,&b);
    int d[a][b];
    for(int i = 0 ; i < a;i++){
        for(int j = 0 ; j < b ; j++){
            printf("enter a value for d[%d][%d]: ",i,j);
            scanf("%d",&d[i][j]);
        }
    }
    for(int i = 0 ; i < a; i++){
        for(int j = 0 ; j < b; j++){
            printf("%d\t",d[i][j]);
            if(j == b-1){
                printf("\n");
            }
            if(i == j){
                sum = sum + d[i][j];
            }
        }
    }
    printf("sum of diagonal = %d", sum);
}