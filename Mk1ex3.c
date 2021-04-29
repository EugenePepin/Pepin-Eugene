#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h> 
int main() {
	setlocale (LC_CTYPE,"ua");
	float x,f;
	int res;
	start: 
	printf ("\n Обчислення виразу з 6 завдання 1 Модульної контрольної \n \n"); 
	printf (" Введiть число x : ");
	scanf("%f",&x);
        if ( x < -10 ) {
		f = 3*pow(x,3)- pow(x,2);
	}
	else if ( x>=-10 && x<10 )  { 
		f = sqrt(10-x);
        }
	else if ( x >10 ) {	
	f = (2*x) + 1 ;
        }
	else { 
		printf (" \n \n Ви ввели некоректнi данi. При x=10 в другому виразi буде корiнь з мiнусового числа \n \n"); 
		printf (" Перевiрте введенi данi та спробуйте ще раз \n \n " );
		goto start;
	}
	printf(" \n ---Результати---- \n ");
	printf("\n Вiдповiдь = ");
	printf ( "%.2f",f); 
        printf ("\n \n -----------------\n ");
        printf("\n ");
end1 :
printf(" \n Ви бажаєте продовжити? \n \n");
  printf(" Введiть (1), щоб продовжити роботу програми \n \n");
  printf(" Введiть (0), щоб вийти з програми \n \n ");
		printf(" \n Ваша вiдповiдь : ");
	scanf("%d",&res);
	printf(" \n" );
	if ( res == 1 ) {
		goto start;
	}
	else if ( res == 0 ) {
		 printf(" \n " );
		return 0; }
	else {
		printf(" \n Перевiрте правильнiсть введених даних та спробуйте ще раз \n");
				goto end1;
 }
  return 0;
}
