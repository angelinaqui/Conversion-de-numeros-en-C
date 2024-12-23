#ifndef __FUNCIONES_H__
#define __FUNCIONES_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void decimal_a_binario(int numero);
void decimal_a_octal(int numero);
void decimal_a_hexadecimal(int numero);

void binario_a_decimal(char bin[]);
void binario_a_octal(char bin[]);
void binario_a_hexadecimal(char bin[]);

void octal_a_decimal(char octal[]);
void octal_a_binario(char octal[]);

void hexadecimal_a_decimal(char hexadecimal[]);
void hexadecimal_a_binario(char hexadecimal[]);

void invertir_cadena(char aux[]);
void invertir(char invertir[]);


#endif // !__FUNCIONES_H__