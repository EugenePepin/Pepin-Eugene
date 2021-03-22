#include <stdio.h>
#include <locale.h>
#include <math.h> 
int main() {
	int a,b,sab,cab,vab;
setlocale (LC_CTYPE,"ua");
printf("\n Обчислення сумми,цiлої частини вiд дiлення,вiднiмання. \n");
printf("\n Число a=");
scanf("%d",&a);
printf("\n Число b=");
scanf("%d",&b);
sab=a+b;
printf("\n Сумма a та b = ");
printf("%d\n", sab);
cab=a/b;
printf("\n Цiла частка вiд  дiлення a на b = ");
printf("%d\n",cab);
vab=a-b;
printf("\n Вiднiмання a вiд b = ");
printf("%d\n",vab);
printf("\n");
return 0;
}
fmod
