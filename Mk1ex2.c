#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main(){
	setlocale (LC_CTYPE,"ua");
    float a,b,c,r,p,s;
    int res;
    start1: 
    printf(" ����������� ���i��� ��������� � ��������� ����, ���� �i���i ������� ���� ����i� \n");
    printf(" \n ����i�� ������� a: ");
		scanf("%f",&a);
	        printf("\n");
    printf(" ����i�� ������� b: ");
		scanf("%f",&b);
	        printf("\n");
    printf(" ����i�� ������� c: ");
		scanf("%f",&c);
	        printf("\n");
	if( a<=0 || b <=0 || c <=0 ) {
      printf("\n C������ ���������� �� ���e ���� �����, ��� ���i������� 0 \n \n");
      printf(" �����i��� ��������i��� �������� ����� �� ��������� �� ���\n\n \n");
		goto start1;
	}
else {		
    p = ((a+b+c)/2);
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    r = s/p;
	printf(" \n -----����������------ \n \n ");
	printf(" �i����i�� : %.3f ", r);
	printf ("\n \n ---------------------\n ");
        printf("\n ");
	}
end1 :
printf(" \n �� ������ ����������? \n \n");
  printf(" ����i�� (1), ��� ���������� ������ �������� \n \n");
  printf(" ����i�� (0), ��� ����� � �������� \n \n ");
		printf(" \n ���� �i����i�� : ");
	scanf("%d",&res);
	printf(" \n" );
	if ( res == 1 ) {
		goto start1;
	}
	else if ( res == 0 ) {
		return 0; }
	else {
		printf(" \n �����i��� ��������i��� �������� ����� �� ��������� �� ��� \n ");
				goto end1;
 }
return 0;
}
