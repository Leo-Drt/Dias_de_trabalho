#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int dias, trabalho, pagar;
    float imposto, total;

    setlocale(LC_ALL, "Portuguese");
    printf("    O encanador cobra o seu dia de trabalho 45 reais.\n");
    printf("    Voc� precisa do trabalho dele agora! \n");
    printf("    Quantos dias voc� vai precisar do trabalho dele?\n");
    scanf("%d",&dias);

    trabalho= 45;

    pagar= dias * trabalho;

    printf("    O valor bruto pago pelos %d dias trabalho s�o de %d reais\n",dias,pagar);
    printf("    Sabendo que se tem a taxa de imposta de renda que s�o de 8%%.\n");

    imposto= 0.08;

    total= pagar - (imposto*pagar);

    printf("    Logo o valor liquido a receber s�o de %.2f reais \n",total);
    printf("    Descontado o imposto de renda do valor bruto R$ %.2f \n",(imposto*pagar));

    return 0;
}
