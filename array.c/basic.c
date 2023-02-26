//wap to enter 10 inputs and store in array and store in array
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], i;
    printf("Input 10 integers:");
    for (i = 0 ; i < 10; i++){
        scanf("%d", &a[i]);
    }
    printf("\n\nintegers:");
    for (int j = 0 ; j < 10; j++){
        printf("%d, ", a[j]);
    }
    return 0;
}