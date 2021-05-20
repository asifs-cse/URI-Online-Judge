#include<stdio.h>
int main(){
    int n,i;
    double a,b,c,med;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf",&a, &b, &c);
        printf("%.1lf\n",((a/10)*2)+((b/10)*3)+(c/10)*5);
    }
    return 0;
}