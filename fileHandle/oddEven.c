// WAP to take 5 intgers as input and perform the following:
// •	Display sum of all integers taken
// •	Write odd numbers from 5 integers to file “odd.txt”
// •	Write even numbers from 5 integers to file “even.txt”
// •	Read “even.txt” and “odd.txt” files and display in monitor
#include<stdio.h>
#include<string.h>
void main(){
    int n[5],sum = 0;
    for(int i= 0; i < 5;i++){
        printf("enter a number: ");
        scanf("%d",&n[i]);
        sum = sum + n[i];
    }
    printf("sum = %d",sum);
    FILE *o;
    FILE *e;
    o = fopen("odd.txt","w+");
    e = fopen("even.txt","w+");
    for(int i= 0; i < 5;i++){
        if(n[i]%2 !=0){
            fprintf(o,"\n %d",n[i]);
        }
        else{
            fprintf(e,"\n %d",n[i]);
        }
    }
    rewind(o);
    rewind(e);
    for(int i = 0 ; i < 5; i ++){
        if(n[i]%2 != 0){
            fscanf(o,"%d",&n[i]);
            printf("odd numbers= %d \t\n",n[i]);
        }
    }
    fclose(o);
    for(int i = 0 ; i < 5; i ++){
        if(n[i]%2 == 0){
            fscanf(e,"%d",&n[i]);
            printf("even numbers= %d \t\n",n[i]);
        }
    }
    fclose(e);
}