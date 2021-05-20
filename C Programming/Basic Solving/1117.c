#include <stdio.h>
int main() {
    float n,s=0;
    int v=0;
    while (v<2)
    {
        scanf("%f",&n);
        if (n>=0 && n<=10)
        {
            s+=n;
            v++;
        }else printf("nota invalida\n");
    }
    printf("media = %.2f\n",s/2);
    return 0;
}