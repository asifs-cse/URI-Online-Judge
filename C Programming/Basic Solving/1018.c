#include<stdio.h>
int main(){
    int tk;
    scanf("%d",&tk);
    printf("%d\n",tk);
    printf("%d nota(s) de R$ 100,00\n",tk/100);
    tk %=100;
    printf("%d nota(s) de R$ 50,00\n",tk/50);
    tk %=50;
    printf("%d nota(s) de R$ 20,00\n",tk/20);
    tk %=20;
    printf("%d nota(s) de R$ 10,00\n",tk/10);
    tk %=10;
    printf("%d nota(s) de R$ 5,00\n",tk/5);
    tk %=5;
    printf("%d nota(s) de R$ 2,00\n",tk/2);
    tk %=2;
    printf("%d nota(s) de R$ 1,00\n",tk);

    return 0;
}