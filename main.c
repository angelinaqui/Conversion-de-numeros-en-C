#include "funciones.h"

int main(){
    int opcion, numero;
    char binario[50], hexadecimal[50], octal[50];
    strcpy(hexadecimal, "");
    strcpy(binario, "");
    strcpy(octal, "");

    do{
        printf("\tProyecto 1\n\n");
        printf("\t1.Binario a decimal\n");
        printf("\t2.Binario a hexadecimal\n");
        printf("\t3.Binario a octal\n");
        printf("\t4.Decimal a binario\n");
        printf("\t5.Decimal a hexadecimal\n");
        printf("\t6.Decimal a octal\n");
        printf("\t7.Hexadecimal a binario\n");
        printf("\t8.Hexadecimal a decimal\n");
        printf("\t9.Octal a binario\n");
        printf("\t10.Octal a decimal\n");
        printf("\t11.Salir\n");
        printf("\tQue numero eliges? ");
        scanf("%d", &opcion);

        switch(opcion){
            case 1:
                printf("\tBinario a decimal\n");
                printf("\tIngresa un numero binario: ");
                scanf("%s", binario);
                binario_a_decimal(binario);
            break;
            case 2:
                printf("\tBinario a hexadecimal\n");
                printf("\tIngresa un numero binario: ");
                scanf("%s", binario);
                binario_a_hexadecimal(binario);
            break;
            case 3:
                printf("\tBinario a octal\n");
                printf("\tIngresa un numero binario: ");
                scanf("%s", binario);
                binario_a_octal(binario);
            break;
            case 4:
                printf("\tDecimal a binario\n");
                printf("\tIngresa un numero decimal: ");
                scanf("%ld", &numero);
                decimal_a_binario(numero);
            break;
            case 5:
                printf("\tDecimal a hecadecimal\n");
                printf("\tIngresa un numero decimal: ");
                scanf("%ld", &numero);
                decimal_a_hexadecimal(numero);
            break;
            case 6:
                printf("\tDecimal a octal\n");
                printf("\tIngresa un numero decimal: ");
                scanf("%ld", &numero);
                decimal_a_octal(numero);
            break;
            case 7:
                printf("\tHexadecimal a binario\n");
                printf("\tIngresa un numero hexadecimal: ");
                scanf("%s", hexadecimal);
                hexadecimal_a_binario(hexadecimal);
            break;
            case 8:
                printf("\tHexadecimal a decimal\n");
                printf("\tIngresa un numero hexadecimal: ");
                scanf("%s", hexadecimal);
                hexadecimal_a_decimal(hexadecimal);
            break;
            case 9:
                printf("\tOctal a binario\n");
                printf("\tIngresa un numero octal: ");
                scanf("%s", octal);
                octal_a_binario(octal);
            break;
            case 10:
                printf("\tOctal a decimal\n");
                printf("\tIngresa un numero octal: ");
                scanf("%s", octal);
                octal_a_decimal(octal);
            break;
            default:
            break;
        }
        printf("\n\n");
    }
    while(opcion != 11 && opcion > 0 && opcion < 11);
    return 0;
    
}