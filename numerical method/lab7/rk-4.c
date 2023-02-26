//x = 1 y = 2 h = 0.5 xp = 2.5 x = 2.5, y = 18.1249
//            h = 0.25                  y = 18.1249
#include<stdio.h>
float f(float x , float y){
    return 1 + 3*x*x;
}
int main(){
    float x,y,xp,h,m1,m2,m3,m4;
    int n;
    printf("enter x and y and h");
    scanf("%f%f%f",&x,&y,&h);
    printf("enter xp: ");
    scanf("%f",&xp);
    n = (xp-x)/h;
    for(int i = 0; i < n;i++){
        m1 = f(x,y);
        m2 = f(x+h/2,y+h/2*m1);
        m3 = f(x+h/2,y+h/2*m2);
        m4 = f(x+h,y+ h *m1);
        y = y + (m1+2*m2+2*m3+m4)/6 * h;
        x = x+ h;
    }
    printf("the value of x = %f and y = %f",x,y);
}