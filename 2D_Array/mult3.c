//wap to ask 3*3 matrix and mult each component by 3
#include<stdio.h>
void main(){
    int d[3][3];
    for(int i = 0; i < 3;i++){
        for(int j = 0; j < 3;j++){
            printf("enter a number ");
            scanf("%d",&d[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t",3 * d[i][j]);
            if(j == 2){
                printf("\n");
            }
        }
    }
}