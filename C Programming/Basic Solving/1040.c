#include<stdio.h>
int main(){
    double s1, s2, s3, s4,s5, avg;
    scanf("%lf %lf %lf %lf",&s1, &s2, &s3, &s4);

    avg = ((s1*2+s2*3+s3*4+s4)/(10));
    printf("Media: %.1lf\n",avg);

    if (avg>=7.0)
    {
        printf("Aluno aprovado.\n");
    }else if (avg>=5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&s5);
        printf("Nota do exame: %.1lf\n",s5);
        if (avg+s5/2>5.0)
        {
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",(s5+avg)/2.0);
    }else{
        printf("Aluno reprovado.\n");
    }
    
    return 0;
}