#include<stdio.h>
void main(){
    int display[2][3];
    for(int i = 0; i < 2;i++){
        for(int j = 0; j < 3;j++){
            printf("enter number you want to display: ");
            scanf("%d",&display[i][j]);
        }
    }
    printf("two dimension array element:\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0 ; j < 3;j++){
            printf("%d",display[i][j]);
            if(j == 2){
                printf("\n");
            }
        }
    }
}