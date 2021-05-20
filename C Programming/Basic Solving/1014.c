#include<stdio.h>
int main(){
    int d;
    float f;
    scanf("%d %f",&d, &f);
    printf("%.3f km/l\n",d/f);
    return 0;
}