//Question number 3: WAP to read two M*N order matrix from user and calculate the sum of two matrices 
//and display the result
#include<stdio.h>
void main(){
    int a,b;
    printf("enter a number of rows and column of first matrix: ");
    scanf("%d%d",&a,&b);
    int c,d;
    printf("enter a number of rows and column of second matrix: ");
    scanf("%d%d",&c,&d);
    int e[a][b],f[c][d];
    if((a = c) && (b == d)){
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                printf("enter element for 1st matrix:");
                scanf("%d",&e[i][j]);
            }
        }
        for(int i = 0; i < c;i++){
            for(int j = 0; j < d; j++){
                printf("enter element for 2nd matrix:");
                scanf("%d",&f[i][j]);
            }
        }
        
        for(int i = 0; i < c;i++){
            for(int j = 0; j < d; j++){
                printf("%d\t",e[i][j]+f[i][j]);   
                if(j == d-1){
                    printf("\n");
                }
            }
        }
        }else{
            printf("not in same order");
        }
}   