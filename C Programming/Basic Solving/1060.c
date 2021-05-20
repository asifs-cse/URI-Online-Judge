#include<stdio.h>
int main(){
    double n;
    int p_num=0, i;
    for (i = 0; i < 6; i++)
    {
        scanf("%lf",&n);
        if (n>0)
        {
            p_num ++;
        }
        
    }
    
    printf("%d valores positivos\n",p_num);
    return 0;
    
}