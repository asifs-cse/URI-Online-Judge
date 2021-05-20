#include<stdio.h>
int main(){
    int i, t, n;
    scanf("%d",&t);
    for (i = 0; i < t; i++)
    {
        scanf("%d",&n);

        if(n==0) printf("NULL\n");
        else{
            if(n%2==0) printf("EVEN");
            else printf("ODD");

            if(n<0) printf(" NEGATIVE\n");
            else printf(" POSITIVE\n");
        }
            
    }
    return 0;
    
}