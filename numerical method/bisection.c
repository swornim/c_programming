#include<stdio.h>
#include<math.h>
float f(float x){
    return x*x-4*x-10;
}
int main(){
    float f0,x0,x1,x2,e = 0.001;
    up:
    printf("enter x1 and x2");
    scanf("%f%f",&x1,&x2);
    float f1,f2;
    f1 = f(x1);
    f2 = f(x2);
    if((f1 * f2) > 0){
        printf("wrong initial guess");
        goto up;
    }
    else{
        do{
            x0 = (x1+x2)/2;
            f0 = f(x0);
            if((f1 * f0) > 0){
                x1 = x0;
                f1 = f0;
            }
            else{
                x2 = x0;
                f2 = f0;
            }
        }while(fabs((x2-x1)/x2) > e);
    }
    printf("the root is %f",x2);

}