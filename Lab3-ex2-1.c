#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h> 
int main() {
	setlocale (LC_CTYPE,"ua");
	float x,y;
        printf ("\n ����������  �i�������������� ����� � ��������i� ������i ��������� (��������� ����� ���������) \n"); 
	printf (" ����i�� ����� x : ");
	scanf("%f",&x);
        printf (" ����i�� ����� y : ");
	scanf("%f",&y);
	if ( x>0 && y>0) {
		printf  (" ����� � ������������ (" );
		printf ( "%.2f",x);
		printf ( ",");
		printf ( "%.2f",y);
		printf  (") ����������� � ������� ��������i \n" );
	}
	else if ( x<0 && y<0) {
                printf  (" ����� � ������������ (" );
		printf ( "%.2f",x);
		printf ( ",");
		printf ( "%.2f",y);
		printf  (") ����������� � �������� ��������i \n" );
        }
	else if ( x<0 && y>0) {
                printf  (" ����� � ������������ (" );
		printf ( "%.2f",x);
		printf ( ",");
		printf ( "%.2f",y);
		printf  (") ����������� � ������� ��������i \n" );
		}
       else if ( x>0 && y<0) {
                printf  (" ����� � ������������ (" );
		printf ( "%.2f",x);
		printf ( ",");
		printf ( "%.2f",y);
		printf  (") ����������� � ���������� ��������i \n" );
        }
	else if ( x == 0 && y==0 ) {
                printf  (" ����� � ������������ (" );
		printf ( "%.2f",x);
		printf ( ",");
		printf ( "%.2f",y);
		printf  (") � �������� ��������� \n" ); }
        else if ( y == 0 ) {
                printf  (" ����� � ������������ (" );
		printf ( "%.2f",x);
		printf ( ",");
		printf ( "%.2f",y);
		printf  (") ����������� �� �i�i x \n" ); }
	else {
                printf  (" ����� � ������������ (" );
		printf ( "%.2f",x);
		printf ( ",");
		printf ( "%.2f",y);
		printf  (") ����������� �� �i�i  y \n" ); }
 return 0;
}
