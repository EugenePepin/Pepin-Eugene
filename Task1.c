#include <stdio.h>
#include <locale.h>
#include <math.h> 
int main() {
	int a,b,sab,cab,vab;
setlocale (LC_CTYPE,"ua");
printf("\n ���������� �����,�i�� ������� �i� �i�����,�i��i�����. \n");
printf("\n ����� a=");
scanf("%d",&a);
printf("\n ����� b=");
scanf("%d",&b);
sab=a+b;
printf("\n ����� a �� b = ");
printf("%d\n", sab);
cab=a/b;
printf("\n �i�� ������ �i�  �i����� a �� b = ");
printf("%d\n",cab);
vab=a-b;
printf("\n �i��i����� a �i� b = ");
printf("%d\n",vab);
printf("\n");
return 0;
}
fmod
