#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "portuguese");

    system("cls");

    printf("####### CONVERSOR #######\n\n");
    printf("(1) DECIMAL > BIN�RIO.\n");
    printf("(2) BIN�RIO > DECIMAL.\n");
    printf("(3) BIN�RIO > HEXADECIMAL.\n");
    printf("(4) HEXADECIMAL > BIN�RIO.\n");
    printf("(5) DECIMAL > HEXADECIMAL.\n");
    printf("(6) HEXADECIMAL > DECIMAL.\n");
    int opcao_1;
    int b_d, d_b, b_h, h_b, d_h, H_d;
    printf("Escolha uma Opera��o:  ");
    scanf("%d", &opcao_1);
    do
    {
        switch (opcao_1)
        {
        case 1:
            printf("A opera��o escolhida � (DECIMAL > BIN�RIO)\n");
            printf("Digite os dados  ");
            scanf("%d", &d_b);
            break;
        case 2:
            printf(" A opera��o escolhida � (BIN�RIO > DECINAL)\n");
            printf("Digite os dados  ");
            scanf("%d", &b_d);
            break;
        case 3:
            printf(" A opera��o escolhida � (BIN�RIO > EXADECIMAL)\n");
            printf("Digite os dados  ");
            scanf("%d", &b_h);
            break;
        case 4:
            printf("A opera��o escolhida � (EXADECIMAL > BIN�RIO)\n");
            printf("Digite os dados  ");
            scanf("%d", &h_b);
            break;
        case 5:
            printf(" A opera��o escolhida � (DECIMAL > EXADECIMAL)\n ");
            printf("Digite os dados  ");
            scanf("%d", &d_h);
            break;
        case 6:
            printf("A opera��o escolhida � (EXADECIMAL > DECIMAL)\n");
            printf("Digite os dados  ");
            scanf("%d", &H_d);
        default:
            printf("op��o invalida\n");
        }
    } while (opcao_1 < 1 || opcao_1 >= 6);
    int a = 0;
    int binari_o[32];
    system("cls");
    if (d_b == 0)
    { printf("0000\n");
        return (0);
    }
    while (d_b > 0)
    { binari_o[a] = d_b % 2;
        d_b = d_b / 2;
          a++;
    } 
    printf("Binario: ");
    for (int i = a - 1; i >= 0; i--)
    { printf("%d", binari_o[i]);}

    return (0);
}
