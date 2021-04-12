#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h> 
int main() {
	setlocale (LC_CTYPE,"ua");
	float x,y;
        printf ("\n Визначення  мiсцезнаходження точки в декартовiй системi координат (Вказується номер квадранта) \n"); 
	printf (" Введiть число x : ");
	scanf("%f",&x);
        printf (" Введiть число y : ");
	scanf("%f",&y);
	if ( x>0 && y>0) {
		printf  (" Число з координатами (" );
		printf ( "%.2f",x);
		printf ( ",");
		printf ( "%.2f",y);
		printf  (") знаходиться в першому квадрантi \n" );
	}
	else if ( x<0 && y<0) {
                printf  (" Число з координатами (" );
		printf ( "%.2f",x);
		printf ( ",");
		printf ( "%.2f",y);
		printf  (") знаходиться в третьому квадрантi \n" );
        }
	else if ( x<0 && y>0) {
                printf  (" Число з координатами (" );
		printf ( "%.2f",x);
		printf ( ",");
		printf ( "%.2f",y);
		printf  (") знаходиться в другому квадрантi \n" );
		}
       else if ( x>0 && y<0) {
                printf  (" Число з координатами (" );
		printf ( "%.2f",x);
		printf ( ",");
		printf ( "%.2f",y);
		printf  (") знаходиться в четвертому квадрантi \n" );
        }
	else if ( x == 0 && y==0 ) {
                printf  (" Число з координатами (" );
		printf ( "%.2f",x);
		printf ( ",");
		printf ( "%.2f",y);
		printf  (") є початком координат \n" ); }
        else if ( y == 0 ) {
                printf  (" Число з координатами (" );
		printf ( "%.2f",x);
		printf ( ",");
		printf ( "%.2f",y);
		printf  (") знаходиться на вiсi x \n" ); }
	else {
                printf  (" Число з координатами (" );
		printf ( "%.2f",x);
		printf ( ",");
		printf ( "%.2f",y);
		printf  (") знаходиться на вiсi  y \n" ); }
 return 0;
}
