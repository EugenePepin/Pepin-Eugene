#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main(){
	setlocale (LC_CTYPE,"ua");
    const float a = 5, b = 7, c=6,d=9;
    float x;
    printf(" Результат обчислення виразу з 4 завдання 1 Модульної контрольної \n");
	printf(" \n -----Результати------ \n \n ");
	x = ( (sqrt(a) + a + pow(a,2))/(sqrt(b) + b + pow(b,2)) ) + ( (sqrt(c) + c + pow(c,2))/(sqrt(d) + d + pow(d,2)) );
        printf (" Вiдповiдь: %.4f", x);
	printf ("\n \n ---------------------\n ");
	printf("\n ");
    return 0;
}
