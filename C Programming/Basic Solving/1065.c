#include<stdio.h>
int main()
{

    int num, temp=0, i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&num);
        if (num%2==0) temp++;
    }
    printf("%d valores pares\n",temp);
    return 0;
}