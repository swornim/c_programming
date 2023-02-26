//WAP to read order of a matrix and its elements.Find transpose matrix of the given matrix
#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter number of rows and column: ");
    scanf("%d%d",&a,&b);
    int d[a][b];
    for(int i = 0 ; i < a; i++){
        for(int j = 0 ; j < b; j++){
            printf("enter the value of d[%d][%d]",i,j);
            scanf("%d",&d[i][j]);
        }
    }
    printf("transpose of matrix is = \n");
    c = a;
    a = b;
    b = c;
    for(int i  = 0 ; i < a;i++){
        for(int j = 0; j < b;j++){
            printf("%d\t",d[j][i]);
            if(j == b-1){
                printf("\n");
            }
        }
    }
}