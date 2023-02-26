#include<stdio.h>
void main(){
    label1:
    int r1,c1;
    printf("enter number of rows: ");
    scanf("%d",&r1);
    printf("enter number of column ");
    scanf("%d",&c1);
    int d1[r1][c1];
    for(int i = 0; i < r1; i++){
        for(int j = 0 ; j < c1;j++){
            printf("enter value of d1[%d][%d]",i,j);
            scanf("%d",&d1[i][j]);
        }
    }

    int r2,c2;
    printf("enter number of rows: ");
    scanf("%d",&r2);
    printf("enter number of column ");
    scanf("%d",&c2);
    int d2[r2][c2];
    for(int i = 0; i < r2; i++){
        for(int j = 0 ; j < c2;j++){
            printf("enter value of d2[%d][%d]",i,j);
            scanf("%d",&d2[i][j]);
        }
    }
    if(c1 != r2){
        printf("it cannot be multiplied....enter another value: ");
        goto label1;
    }
    for(int i = 0 ; i <)
}