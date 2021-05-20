#include<stdio.h>
int main(){
    int x,y,i, temp=0;
    scanf("%d %d",&x, &y);
    for (i=x-1; i>y; i--)
    {
        if (i%2!=0)
        {
            temp +=i;
        }
        
    }
    printf("%d\n",temp);
    return 0;
}