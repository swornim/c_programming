//WAP that reads mark's of 15 students in c-Programming.Calculate and display the average marks as well.

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[15], i;
    printf("Input marks of 15 students:");
    for (i = 0 ; i < 15; i++){
        printf("\nMarks of student %d\t=", i+1);
        scanf("%d", &a[i]);
    }
    int average, sum;
    for (int i = 0 ; i < 15; i++){
        sum += a[i];
        average = sum / 15;
    }
    printf("\n\nAverage Marks = %d", average);
    return 0;
}