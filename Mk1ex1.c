#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main(){
	setlocale (LC_CTYPE,"ua");
    const float a = 5, b = 7, c=6,d=9;
    float x;
    printf(" ��������� ���������� ������ � 4 �������� 1 �������� ���������� \n");
	printf(" \n -----����������------ \n \n ");
	x = ( (sqrt(a) + a + pow(a,2))/(sqrt(b) + b + pow(b,2)) ) + ( (sqrt(c) + c + pow(c,2))/(sqrt(d) + d + pow(d,2)) );
        printf (" �i����i��: %.4f", x);
	printf ("\n \n ---------------------\n ");
	printf("\n ");
    return 0;
}
