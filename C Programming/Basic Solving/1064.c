#include<stdio.h>
int main(){
    int i, pos=0;
    double num, avg=0;

    for (i = 0; i < 6; i++)
    {   
        scanf("%lf",&num);
        if (num>0)
        {
            pos++;
            avg +=num;
        }
        
    }
    printf("%d valores positivos\n",pos);
    printf("%.1lf\n",avg/pos);
    return 0;
}