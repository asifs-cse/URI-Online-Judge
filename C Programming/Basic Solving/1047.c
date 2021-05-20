#include<stdio.h>
int main(){

    // int fh, fm, lh, lm, duration_h, duration_m;  
    // scanf("%d %d %d %d",&fh, &fm, &lh, &lm);     

    // duration_h = lh-fh;
    // if (duration_h <0)
    // {
    //     duration_h = 25+(lh-fh);
    // }
    // duration_m = lm - fm;
    // if (duration_m<0)
    // {
    //     duration_m = 60+(lm-fm);
    //     duration_h--;
    // }
    // if (fh==lh && fm==lm)
    // {
    //     printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    // }
    // else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duration_h, duration_m);
    // return 0;

    int first_h, first_m, last_h, last_m, dif;
    scanf("%d %d %d %d", &first_h, &first_m, &last_h, &last_m);

    dif = ((last_h*60)+last_m) - ((first_h*60)+first_m);
    if(dif<=0) dif += 24*60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60, dif%60);

    return 0;

}