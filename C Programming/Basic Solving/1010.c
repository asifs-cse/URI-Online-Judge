#include<stdio.h>
int main(){
    int u, q;
    float p, result;
    scanf("%d %d %f",&u, &q, &p);
    result = q*p;
    scanf("%d %d %f",&u, &q, &p);
    result += q*p;
    printf("VALOR A PAGAR: R$ %.2f\n",result);

    return 0;
}