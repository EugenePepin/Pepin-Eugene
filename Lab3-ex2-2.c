#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h> 
int main() {
	setlocale (LC_CTYPE,"ua");
	int n;
	printf(" Введiть порядковий номер мiсяця в роцi ( Вiд 1 до 12 ) :  " );
	scanf("%d",&n);
	if ( n<1 || n>12 ) {
		printf ( " Мiсяця з таким порядковим номером не iснує" ); printf ( "\n" ); return 0 ; }
	printf(" Число, яке ви ввели  -  " );
	printf("%d", n );
	printf (" \n Мiсяць, якому це число вiдповiдає :");
switch (n) {
    case 1:
        printf(" Сiчень");
        break;
    case 2:
        printf(" Лютий");
        break;
    case 3:
        printf(" Березень");
        break;
    case 4:
        printf(" Квiтень");
        break;
    case 5:
        printf(" Травень");
        break;
    case 6:
        printf(" Червень");
        break;
    case 7:
        printf(" Липень");
        break;
    case 8:
        printf(" Серпень");
        break;
    case 9:
        printf(" Вересень");
        break;
    case 10:
        printf(" Жовтень");
        break;
    case 11:
        printf(" Листопад");
        break;
    case 12:
        printf(" Грудень");
        break;
    }
	printf ( "\n" );
    return 0;
}
 
