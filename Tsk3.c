#include <stdio.h>
#include <locale.h>
#include <math.h> 
int main() {
	setlocale (LC_CTYPE,"ua");
       int x,z;
	float y;
	printf("\n ���������� �����i� � �������� �������� 16 ���i����. \n");
        printf("\n ����� x=");
        scanf("%d",&x); 
        printf("\n ����� z=");
	scanf("%d",&z); 
        if (x>=0) {
		printf ("\n � ������� ������� x �� ���� ����� �� ����. \n");
	}
	y = sqrt(log10(1-2*x)/(z+3));
       printf("\n �i����i�� = ");
       printf("%f",y); 
       printf("\n");
	printf("\n");
       return 0;
}

