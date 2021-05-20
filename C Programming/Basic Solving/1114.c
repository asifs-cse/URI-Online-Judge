#include<stdio.h>
int main(){
    int pass,i;
    scanf("%d",&pass);
    for(i=0; pass!=2002; i++){
        if(pass!=2002) printf("Senha Invalida\n");
        scanf("%d",&pass);
    }
    
    printf("Acesso Permitido\n");
    return 0;
}