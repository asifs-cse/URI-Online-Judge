#include<stdio.h>
int main(){
    int code, price;
    scanf("%d %d",&code, &price);
    if (code==1)
    {
        printf("Total: R$ %.2lf\n",4.00*price);
    }else if (code==2)
    {
        printf("Total: R$ %.2lf\n",4.50*price);
    }else if (code==3)
    {
        printf("Total: R$ %.2lf\n",5.00*price);
    }else if (code==4)
    {
        printf("Total: R$ %.2lf\n",2.00*price);
    }else if (code==5)
    {
        printf("Total: R$ %.2lf\n",1.50*price);
    }
    return 0;
    
}