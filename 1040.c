#include <stdio.h>

int main() {
    float N1,N2,N3,N4,N5;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    float ave,aveN;
    
    ave = (N1*2+N2*3+N3*4+N4*1)/10.0;
    printf("Media: %.1f\n",ave);
    if(ave>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(ave<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(ave>=5.0 && ave<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf ("%f",&N5);
        printf("Nota do exame: %.1f\n",N5);
        aveN = (ave+N5)/2;
        if(aveN>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(aveN<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",aveN);
        
    }
    
    

    return 0;
    }
