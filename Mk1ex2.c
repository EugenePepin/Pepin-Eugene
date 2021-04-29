#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main(){
	setlocale (LC_CTYPE,"ua");
    float a,b,c,r,p,s;
    int res;
    start1: 
    printf(" Знаходження радiусу вписаного в трикутник кола, якщо вiдомi довжини його сторiн \n");
    printf(" \n Введiть сторону a: ");
		scanf("%f",&a);
	        printf("\n");
    printf(" Введiть сторону b: ");
		scanf("%f",&b);
	        printf("\n");
    printf(" Введiть сторону c: ");
		scanf("%f",&c);
	        printf("\n");
	if( a<=0 || b <=0 || c <=0 ) {
      printf("\n Cторона трикутника не можe бути менша, або дорiвнювати 0 \n \n");
      printf(" Перевiрте правильнiсть введених даних та спробуйте ще раз\n\n \n");
		goto start1;
	}
else {		
    p = ((a+b+c)/2);
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    r = s/p;
	printf(" \n -----Результати------ \n \n ");
	printf(" Вiдповiдь : %.3f ", r);
	printf ("\n \n ---------------------\n ");
        printf("\n ");
	}
end1 :
printf(" \n Ви бажаєте продовжити? \n \n");
  printf(" Введiть (1), щоб продовжити роботу програми \n \n");
  printf(" Введiть (0), щоб вийти з програми \n \n ");
		printf(" \n Ваша вiдповiдь : ");
	scanf("%d",&res);
	printf(" \n" );
	if ( res == 1 ) {
		goto start1;
	}
	else if ( res == 0 ) {
		return 0; }
	else {
		printf(" \n Перевiрте правильнiсть введених даних та спробуйте ще раз \n ");
				goto end1;
 }
return 0;
}
