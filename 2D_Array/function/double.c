//WAP to define three user defined functins for reading,processing and displaying 2*3 matrix.
//Double the matrix elements and display it
#include<stdio.h>

int d[2][3];

void read();
void processing();
void display();

void main(){
    read();
    processing();
    display();
}
void read(){
    for(int i = 0 ; i < 2;i++){
        for(int j = 0 ; j < 3; j++){
            printf("enter the value of d[%d][%d]: ",i,j);
            scanf("%d",&d[i][j]);
        }
    }    
}
void processing(){
    for(int i = 0; i < 2; i++){
        for(int j = 0 ; j < 3; j++){
            d[i][j] = d[i][j] * 2;
        }
    }
}
void display(){
    for(int i = 0 ; i < 2; i++){
        for(int j = 0 ; j < 3; j++){
            printf("%d\t",d[i][j]);
            if(j == 2){
                printf("\n");
            }
        }
    }
}