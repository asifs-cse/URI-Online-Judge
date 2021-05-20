#include<stdio.h>
int main(){
    int n,i;
    double e;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        int a,b;
        scanf("%d %d",&a, &b);
        if(b==0) printf("divisao impossivel\n");
        else{
            e =a/(b*1.00);
            printf("%.1lf\n",e);
        }
    }
    return 0;
}