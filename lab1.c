#include <stdio.h>
#include <locale.h>
#include <math.h> 
int main() {
	int a,b,sa,sg;
	setlocale (LC_CTYPE,"ua");
	printf("\n ���������� �������� ����������� �� �����������. \n");
	printf("\n ����� a= ");
        scanf("%d",&a);
        printf("\n ����� b= ");
	scanf("%d",&b);
	sa = (a+b)/2; 
	printf("\n ������ �����������= ");
        printf("%d\n", sa);
	sg = sqrt(a*b);
        printf("\n ������ �����������= ");
        printf("%d\n", sg);	   
	printf("\n");
return 0;
}
