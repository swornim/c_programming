//WAP that read marks of C-Programming of n students and print out the least 5 of them[bottom 5]
#include<stdio.h>
#include <stdio.h>
    int main()
    {
        int i, j, a, n, number[50];
        printf("Enter the value of N \n");
        scanf("%d", &n);
        printf("Enter the numbers \n");
        for (i = 0; i < n; i++){
            scanf("%d", &number[i]);
        }
        for (i = 0; i < n; i++){
            for (j = i + 1; j < n;j++){
                if (number[i] < number[j]){// n[i] = 5,n[j] = 4
                    a =  number[i];//a = 5
                    number[i] = number[j];//n[i]=4
                    number[j] = a;//n[j] = 5
                }
            }
        }
        printf("The least 5 marks are given below\n");
        for (i = n; i > (n-5); i--){
            printf("%d\t", number[i]);
        }
        return 0;
 
    }