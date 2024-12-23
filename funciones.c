#include "funciones.h"

void decimal_a_binario(int numero){
    int i = 0;
    char *binario = NULL;
    binario=(char*)malloc(sizeof(char*));
    strcpy(binario, "");
    do{
        i = numero%2;
        numero = (int)(numero/2);
        if(i==1){
            strcat(binario, "1");
        } else{
            strcat(binario, "0");
        }
    }
    while(numero != 0);
    printf("\tEl numero binario: ");
    invertir(binario);
    free(binario);
    binario = NULL;
}

void decimal_a_octal(int numero){
    int i = 0;
    char *octal = NULL;
    octal=(char *)malloc(sizeof(char*));
    strcpy(octal, "");
    do{
        i = numero%8;
        numero = (int)(numero/8);
        switch(i){
            case 0:
                strcat(octal, "0");
            break;
            case 1:
                strcat(octal, "1");
            break;
            case 2:
                strcat(octal, "2");
            break;
            case 3:
                strcat(octal, "3");
            break;
            case 4:
                strcat(octal, "4");
            break;
            case 5:
                strcat(octal, "5");
            break;
            case 6:
                strcat(octal, "6");
            break;
            case 7:
                strcat(octal, "7");
            break;
        }
    }
    while(numero != 0);
    printf("\n");
    printf("\tNumero octal: ");
    invertir(octal);
    free(octal);
    octal = NULL;

}

void decimal_a_hexadecimal(int numero){
    int i = 0;
    char *hexadecimal = NULL;
    hexadecimal=(char*)malloc(sizeof(char*));
    strcpy(hexadecimal, "");
    do{
        i = numero%16;
        numero = (int)(numero/16);
        switch(i){
            case 0:
                strcat(hexadecimal, "0");
            break;
            case 1:
                strcat(hexadecimal, "1");
            break;
            case 2:
                strcat(hexadecimal, "2");
            break;
            case 3:
                strcat(hexadecimal, "3");
            break;
            case 4:
                strcat(hexadecimal, "4");
            break;
            case 5:
                strcat(hexadecimal, "5");
            break;
            case 6:
                strcat(hexadecimal, "6");
            break;
            case 7:
                strcat(hexadecimal, "7");
            break;
            case 8:
                strcat(hexadecimal, "8");
            break;
            case 9:
                strcat(hexadecimal, "9");
            break;
            case 10:
                strcat(hexadecimal, "A");
            break;
            case 11:
                strcat(hexadecimal, "B");
            break;
            case 12:
                strcat(hexadecimal, "C");
            break;
            case 13:
                strcat(hexadecimal, "D");
            break;
            case 14:
                strcat(hexadecimal, "E");
            break;
            case 15:
                strcat(hexadecimal, "F");
            break;
        }
    }
    while(numero != 0);
    printf("\n");
    printf("\tNumero en hexadecimal: ");
    invertir(hexadecimal);
    free(hexadecimal);
    hexadecimal = NULL;
}

void binario_a_decimal(char bin[]){
    int numero = 0, potencia = 0;
    for(int i = strlen(bin)-1; i >= 0; i--){
        if(bin[i] == '1'){
            numero = numero + pow(2, potencia);
        }
        potencia = potencia + 1;
    }
    printf("\tNumero decimal: %d\n", numero);
}

void binario_a_octal(char bin[]){
    int numero = 0, potencia = 0, i = 0;
    char *octal = NULL;
    octal=(char *)malloc(sizeof(char*));
    strcpy(octal, "");
    for(int j = strlen(bin)-1; i >= 0; i--){
        if(bin[i] == '1'){
            numero = numero+pow(2, potencia);
        }
        potencia = potencia + 1;
    }
    do{
        i = numero%8;
        numero = (int)(numero/8);
        switch(i){
            case 0:
                strcat(octal, "0");
            break;
            case 1:
                strcat(octal, "1");
            break;
            case 2:
                strcat(octal, "2");
            break;
            case 3:
                strcat(octal, "3");
            break;
            case 4:
                strcat(octal, "4");
            break;
            case 5:
                strcat(octal, "5");
            break;
            case 6:
                strcat(octal, "6");
            break;
            case 7:
                strcat(octal, "7");
            break;
            default:
                printf("No valido\n");
            break;
        }
    }
    while(numero != 0);
    printf("\n");
    printf("\tNumero octal: ");
    invertir(octal);
    free(octal);
    octal = NULL;
}

void binario_a_hexadecimal(char bin[]){
    int numero = 0, potencia = 0, i = 0;
    char *hexadecimal = NULL;
    hexadecimal=(char *)malloc(sizeof(char*));
    strcpy(hexadecimal, "");
    for(int i = strlen(bin)-1; i >= 0; i--){
        if(bin[i] == '1'){
            numero = numero +pow(2, potencia);
        }
        potencia = potencia+1;
    }
    do{
        i = numero%16;
        numero=(int)(numero/16);
        switch(i){
            case 0:
                strcat(hexadecimal, "0");
            break;
            case 1:
                strcat(hexadecimal, "1");
            break;
            case 2:
                strcat(hexadecimal, "2");
            break;
            case 3:
                strcat(hexadecimal, "3");
            break;
            case 4:
                strcat(hexadecimal, "4");
            break;
            case 5:
                strcat(hexadecimal, "5");
            break;
            case 6:
                strcat(hexadecimal, "6");
            break;
            case 7:
                strcat(hexadecimal, "7");
            break;
            case 8:
                strcat(hexadecimal, "8");
            break;
            case 9:
                strcat(hexadecimal, "9");
            break;
            case 10:
                strcat(hexadecimal, "A");
            break;
            case 11:
                strcat(hexadecimal, "B");
            break;
            case 12:
                strcat(hexadecimal, "C");
            break;
            case 13:
                strcat(hexadecimal, "D");
            break;
            case 14:
                strcat(hexadecimal, "E");
            break;
            case 15:
                strcat(hexadecimal, "F");
            break;
        }
    }
    while(numero != 0);
    printf("\n");
    printf("\tNumero hexadecimal: ");
    invertir(hexadecimal);
    free(hexadecimal);
    hexadecimal = NULL;
}

void octal_a_decimal(char octal[]){
    long long decimal = 0, i = 0, aux = 0;
    invertir_cadena(octal);
    while(octal[i] != '\0'){
        switch(octal[i]){
            case '0':
                i++;

            break;
            case '1':
                decimal += 1*pow(8,i);
                i++;
            break;
            case '2':
                decimal += 2*pow(8,i);
                i++;
            break;
            case '3':
                decimal += 3*pow(8,i);
                i++;
            break;
            case '4':
                decimal += 4*pow(8,i);
                i++;
            break;
            case '5':
                decimal += 5*pow(8,i);
                i++;
            break;
            case '6':
                decimal += 6*pow(8,i);
                i++;
            break;
            case '7':
                decimal += 7*pow(8,i);
                i++;
            break;
        }
    }
    printf("\tNumero decimal: %lld\n", decimal);
}

void octal_a_binario(char octal[]){
    int a = 0, tam = 0, aux = 0;
    char *binario = NULL;
    binario=(char*)malloc(sizeof(char*));
    tam = strlen(octal);
    strcpy(binario, "");
    for(a = 0; a < tam; a++){
        switch(octal[a]){
            case '0':
                strcat(binario, "000");
            break;
            case '1':
                strcat(binario, "001");
            break;
            case '2':
                strcat(binario, "010");
            break;
            case '3':
                strcat(binario, "011");
            break;
            case '4':
                strcat(binario, "100");
            break;        
            case '5':
                strcat(binario, "101");
            break;    
            case '6':
                strcat(binario, "110");    
            break;
            case '7':
                strcat(binario, "111");
            break;
            default:
                aux += 5;
            break;
        }
    }
    if(aux != 0){
        printf("\tEl numero que ingresaste no es valido\n");
    }else{
        printf("\tNumero binario: %s\n", binario);
    }
    free(binario);
    binario = NULL;
}

void hexadecimal_a_decimal(char hexadecimal[]){
    long long numero = 0;
    int i = 0, j;
    for(j = strlen(hexadecimal)-1; j >= 0; j--){
        switch(hexadecimal[j]){
            case '0':
			    i++;
            break;
		    case '1':
			    numero+=1*pow(16,i);
			    i++;
            break;
		    case '2':
			    numero+=2*pow(16,i);
			    i++;
            break;
		    case '3':
			    numero+=3*pow(16,i);
			    i++;
            break;
		    case '4':
			    numero+=4*pow(16,i);  
			    i++;
            break;
		    case '5':
			    numero+=5*pow(16,i);
			    i++;
            break;
		    case '6':
			    numero+=6*pow(16,i);
			    i++;
            break;
		    case '7':
			    numero+=7*pow(16,i);
			    i++;
            break;
		    case '8':
			    numero+=8*pow(16,i);
			    i++;
            break;
		    case '9':
			    numero+=9*pow(16,i);
			    i++;
            break;
		    case 'A': case 'a':
			    numero+=10*pow(16,i);
			    i++;
            break;
		    case 'B': case 'b':
			    numero+=11*pow(16,i);
			    i++;
            break;
		    case 'C': case 'c':
			    numero+=12*pow(16,i);
			    i++;
            break;
		    case 'D': case 'd':
			    numero+=13*pow(16,i);
			    i++;
            break;
		    case 'E': case'e':
			    numero+=14*pow(16,i);
			    i++;
            break;
		    case 'F': case 'f':
			    numero+=15*pow(16,i);
			    i++;
            break;
        }
    }
    printf("\tNumero decimal: %lld\n", numero);
}

void hexadecimal_a_binario(char hexadecimal[]){
    int i = 0, tam = 0;
    char *binario = NULL;
    tam = strlen(hexadecimal);
    binario = (char *)malloc(sizeof(char*));
    strcpy(binario, "");
    for(i; i < tam; i++){
        switch(hexadecimal[i]){
            case '0':
                strcat(binario, "0000");
            break;    
            case '1':
                strcat(binario, "0001");
            break;
            case '2':
                strcat(binario, "0010");
            break;
            case '3':
                strcat(binario, "0011");
            break;
            case '4':
                strcat(binario, "0100");
            break;
            case '5':
                strcat(binario, "0101");
            break;        
            case '6':
                strcat(binario, "0110");
            break;
            case '7':
                strcat(binario, "0111");
            break;
            case '8':
                strcat(binario, "1000");
            break;
            case '9':
                strcat(binario, "1001");
            break;
            case 'A': case 'a':
                strcat(binario, "1010");
            break;
            case 'B': case 'b':
                strcat(binario, "1011");
            break;
            case 'C': case 'c':
                strcat(binario, "1100");
            break;
            case 'D': case 'd':
                strcat(binario, "1101");
            break;
            case 'E': case 'e':
                strcat(binario, "1110");
            break;
            case 'F': case 'f':
                strcat(binario, "1111");
            break;
        }
    }
    printf("Numero binario: %s\n", binario);
    free(binario);
    binario = NULL;

}

void invertir(char invertir[]){
    for(int i = strlen(invertir)-1; i >= 0; i--){
        printf("%c", invertir[i]);
    }
    printf("\n");
}

void invertir_cadena(char aux[]){
    char a;
    for(int i = 0; i < (strlen(aux)/2); i++){
        a = aux[i];
        aux[i] = aux[strlen(aux)-1-i];
        aux[strlen(aux)-1-i] = a;
    }

}