#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h> 
int main() {
	setlocale (LC_CTYPE,"ua");
	int n;
	printf(" ����i�� ���������� ����� �i���� � ���i ( �i� 1 �� 12 ) :  " );
	scanf("%d",&n);
	if ( n<1 || n>12 ) {
		printf ( " �i���� � ����� ���������� ������� �� i���" ); printf ( "\n" ); return 0 ; }
	printf(" �����, ��� �� �����  -  " );
	printf("%d", n );
	printf (" \n �i����, ����� �� ����� �i����i�� :");
switch (n) {
    case 1:
        printf(" �i����");
        break;
    case 2:
        printf(" �����");
        break;
    case 3:
        printf(" ��������");
        break;
    case 4:
        printf(" ��i����");
        break;
    case 5:
        printf(" �������");
        break;
    case 6:
        printf(" �������");
        break;
    case 7:
        printf(" ������");
        break;
    case 8:
        printf(" �������");
        break;
    case 9:
        printf(" ��������");
        break;
    case 10:
        printf(" �������");
        break;
    case 11:
        printf(" ��������");
        break;
    case 12:
        printf(" �������");
        break;
    }
	printf ( "\n" );
    return 0;
}
 
