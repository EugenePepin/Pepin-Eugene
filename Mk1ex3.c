#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h> 
int main() {
	setlocale (LC_CTYPE,"ua");
	float x,f;
	int res;
	start: 
	printf ("\n ���������� ������ � 6 �������� 1 �������� ���������� \n \n"); 
	printf (" ����i�� ����� x : ");
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
		printf (" \n \n �� ����� ���������i ���i. ��� x=10 � ������� �����i ���� ���i�� � �i�������� ����� \n \n"); 
		printf (" �����i��� ������i ���i �� ��������� �� ��� \n \n " );
		goto start;
	}
	printf(" \n ---����������---- \n ");
	printf("\n �i����i�� = ");
	printf ( "%.2f",f); 
        printf ("\n \n -----------------\n ");
        printf("\n ");
end1 :
printf(" \n �� ������ ����������? \n \n");
  printf(" ����i�� (1), ��� ���������� ������ �������� \n \n");
  printf(" ����i�� (0), ��� ����� � �������� \n \n ");
		printf(" \n ���� �i����i�� : ");
	scanf("%d",&res);
	printf(" \n" );
	if ( res == 1 ) {
		goto start;
	}
	else if ( res == 0 ) {
		 printf(" \n " );
		return 0; }
	else {
		printf(" \n �����i��� ��������i��� �������� ����� �� ��������� �� ��� \n");
				goto end1;
 }
  return 0;
}
