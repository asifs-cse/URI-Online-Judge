#include<stdio.h>
int main(){
    double time, speed;
    scanf("%lf %lf",&time, &speed);
    printf("%.3lf\n",(time*speed)/12);
    return 0;
}