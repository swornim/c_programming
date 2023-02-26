//1 n+1 9:16
//n n-1 n:18
//n-1 1 1:10

//x = 6.99999 y = -8.9999 z = n+1.99999 
#include<stdio.h>

int main(){
    float a[10][10],r;
    int n = 3;
    for(int i = 0 ; i < n;i++){
        for(int j = 0; j < n+1;j++){
            printf("enter a[%d][%d]: ",i+1,j+1);
            scanf("%f",&a[i][j]);
        }
    }
    for(int i = 0 ; i < n-1;i++){
        if(a[i][i] == 0){
            printf("mathematical error!!");
            break;
        }
        for(int j = i+1 ; j < n;j++){
            r = a[j][i]/a[i][i];
            for(int k = 0 ; k < n+1;k++){
                a[j][k] = a[j][k] - r * a[i][k];
            }
        }
    }
    float x[10];
    x[n] = a[n][n+1]/a[n][n];
    printf("%f",a[2][4]);
    for(int i  = n-1; i >=1;i--){
        x[i] = a[i][n+1];
        printf("%f\n",x[i]);
        for(int j = i+1; j <= n;j++){
            x[i] = x[i] - a[i][j] * x[j];
        }
        x[i] = x[i]/a[i][i];
    }
    for(int i = 0;i<n;i++){
        printf("x[%d]->%f\n",i,x[i]);
    }
}