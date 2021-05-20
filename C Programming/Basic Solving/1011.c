#include<stdio.h>
int main(){
    float radius;
    scanf("%f",&radius);
    printf("VOLUME = %.3f\n",((4*3.14159*radius*radius*radius))/3);

    return 0;
}