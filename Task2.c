#include <stdio.h>
#include <locale.h>
#include <math.h> 
int main() {
setlocale (LC_CTYPE,"ua");
float y;
const float a = 2;
const float b = 10;
const float c = 20;
printf("\n ���������� �����i� � ������� �������� 16 ���i����. \n");
y = (((a+b*c)/(2*a-b-c))+((a)/(b+a)));
printf("\n �i����i�� = ");
printf("%f",y);
printf("\n");
printf("\n");
return 0;
}
