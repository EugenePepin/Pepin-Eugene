#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h> 
int main() {
	setlocale (LC_CTYPE,"ua");
	int a;
	float b,c;
	printf ("\n Обчислення виразу за скороченою формою (if) \n"); 
	printf (" Введiть число a (2,4,6) : ");
	scanf("%d",&a);
         if ( a!=2  && a!=4  && a!=6 ) { 
             printf (" Ви ввели некоректнi данi. Число 'a' має бути 2,4 aбо 6 \n "); return 0;
		}
	printf (" Введiть дiйсне число с : ");
	scanf("%f",&c);
	if ( a == 2 ) {
		b = (a*a)-4*c/4*a*c;
	if ( c == 0 )  { 
		printf (" Ви ввели некоректнi данi. Число 'c' в цьому випадку не має дорiвнювати 0 \n "); return 0;
	}}
	if ( a ==4) {
		b = sqrt ( ( a*c ) - 2*a );
		if ( c <= 2 ) {
		printf (" Ви ввели некоректнi данi. Число 'c' в цьому випадку не має бути меншим, нiж 2 \n "); return 0;
		}}
	if ( a ==6 ) 
		b = (c*c) - 4*a;	
	printf("\n Вiдповiдь = ");
	printf ( "%.2f",b); 
	printf( "\n ");

  return 0;
}
   
