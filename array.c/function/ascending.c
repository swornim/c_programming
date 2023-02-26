//WAP to read 10 numbers and reorders them in ascending order using function.
//USe functions for read and display array as well  
#include<stdio.h>
void readValue(int d[]);
void order(int d[]);
void main(){
    int d[10];
    readValue(d);
    order(d);
    for(int i = 0 ; i < 10;i++){
        printf("%d \t",d[i]);  
    }
}
void readValue(int d[]){
    for(int i = 0 ; i < 10; i++){
        printf("enter a number: ");
        scanf("%d",&d[i]);
    }
}
void order(int d[]){
    int min;
    printf("assending order =");
    for(int i = 0 ; i < 10;i++){
        for(int j = i+1 ; j < 10;j++ ){
            if(d[i] > d[j]){
                min = d[i];
                d[i] = d[j];
                d[j] = min;
            }
        }   
                
    }
}