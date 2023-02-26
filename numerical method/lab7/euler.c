#include<stdio.h>
float f(float x , float y){
    return 1 + 3*x*x;
}
int main(){
    float x,y,xp,h;
    int n;
    printf("enter x and y and h");
    scanf("%f%f%f",&x,&y,&h);
    printf("enter xp: ");
    scanf("%f",&xp);
    n = (xp-x)/h;
    for(int i = 0; i < n;i++){
        y = y + h*f(x,y);
        x = x+ h;
    }
    printf("the value of x = %f and y = %f",x,y);
}