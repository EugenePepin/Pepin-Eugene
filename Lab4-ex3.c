#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main() {
	setlocale (LC_CTYPE,"ua");
  int x;
float j, i, s, p=0;
while (1) 	{
 printf(" ���������� �����i � 3 �������� 16 ���i���� \n");
 printf(" ����i�� �i�� ����� x : ");
 scanf("%d", &x);
	if ( x < 0 && x >= -10 ) {
		printf ( "\n ��� ����� �������i x, �i����i�� ���� �����������. \n ��������� �� ��� \n \n");
		continue; }
    for (i = 1; i <= 10; i++) {
    for (s = 0,j = i; j <= 10; j++) {
      s+= (i + 2)/(j+x);
    }
		  p += s;
  }
       printf(" \n ---����������---- \n  ");
	printf (" \n �i������ : ");
	printf ("%.3f",p );
	printf ("\n");
	printf (" \n ------------------\n ");
printf(" \n ");
break;
}

return 0; 
}
