#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main() {
	setlocale (LC_CTYPE,"ua");
  int x,y,res;
  float a;
while (1) {
  while (2) { 
    printf(" ���������� �������� � 1 ��������, 16 ���i���� \n");
    printf(" ����i�� ����� x: ");
    scanf("%d", &x);
    printf(" ����i�� ����� y: ");
    scanf("%d", &y);

    if ( sin(x)+(x*y)-(2*x)+y == 0) {
      printf("\n ��� ����� ������� x �� y ���������� �i����� �� 0 \n");
      printf(" �����i��� ��������i��� �������� ����� �� ��������� �� ���\n\n");
      continue;
    }
    else {
      break;
    }
  }
  a = (((x*y) + (2*x) - (pow(y,x)))/(sin(x)+(x*y)-(2*x)+y));
  printf(" \n ---����������---- \n  ");
  printf(" \n  �i����i��: ");
  printf("%.2f\n ", a);
  printf (" \n ------------------\n ");
		while (3){
  printf(" \n �� ������ ����������? \n");
  printf(" ����i�� (1), ��� ���������� ������ �������� \n");
  printf(" ����i�� (0), ��� ����� � �������� \n ");
		printf(" \n ���� �i����i�� : ");
	scanf("%d",&res);
	printf(" \n" );
	if ( res == 1 ) {
		break;
	}
	else if ( res == 0 ) {
		return 0; }
	else {
		printf(" \n �����i��� ��������i��� �������� ����� �� ��������� �� ��� \n ");
				continue;
 }
}
		
}
	
  return 0;
}
