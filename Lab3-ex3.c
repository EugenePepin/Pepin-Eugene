#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h> 
int main() {
	setlocale (LC_CTYPE,"ua");
	int x,y;
	float f;
        printf ("\n ���������� �������� �����i� � 3 �������� 16 ���i���� \n"); 
	printf (" ����i�� ����� x : ");
	scanf("%d",&x);
        printf (" ����i�� ����� y : ");
	scanf("%d",&y);
	if ( x == 0 && y == 0 ) {
		printf (" �� ����� ���������i ���i. � �������i ���������� �i����� �� 0  \n "); return 0;
		}
	else if ( y == 1 ) {
		printf (" �� ����� ���������i ���i. � �������i ���������� �i����� �� 0  \n "); return 0;
		}
	else 
       f = (float) ( (x + y)  / ( pow(x,2) + ( x * y )  - pow(y,2) ) ) + (  (x)  /  ( 1 - pow(y,2)  ) ) + ( (y)/ ( 1 + pow(x,2) ) );
	printf  (" �i����i�� : " );
	printf ( "%.2f", f);
	printf ( "\n");
return 0;
}
