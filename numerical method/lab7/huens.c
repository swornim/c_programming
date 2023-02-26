//x = 1 y = 2 h = 0.5 xp = 2.5 x = 2.5, y = 18.31
//            h = 0.25                  y = 18.1718
#include<stdio.h>
float f(float x , float y){
    return 1 + 3*x*x;
}
int main(){
    float x,y,xp,h,m1,m2;
    int n;
    printf("enter x and y and h");
    scanf("%f%f%f",&x,&y,&h);
    printf("enter xp: ");
    scanf("%f",&xp);
    n = (xp-x)/h;
    for(int i = 0; i < n;i++){
        m1 = f(x,y);
        m2 = f(x+h,y+h*m1);
        y = y + h/2*(m1+m2);
        x = x+ h;
    }
    printf("the value of x = %f and y = %f",x,y);
}