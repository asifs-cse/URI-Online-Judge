#include<stdio.h>
int main(){
    int total_days, year, month, day;
    scanf("%d",&total_days);

    year = total_days/365;
    total_days = total_days%365;
    month = total_days/30;
    day = total_days%30;

    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",day);

    return 0;
}