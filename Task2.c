#include <stdio.h>
#include <locale.h>
#include <math.h> 
int main() {
setlocale (LC_CTYPE,"ua");
float y;
const float a = 2;
const float b = 10;
const float c = 20;
printf("\n Обчислення функцiї з другого завдання 16 варiанту. \n");
y = (((a+b*c)/(2*a-b-c))+((a)/(b+a)));
printf("\n Відповідь = ");
printf("%f",y);
printf("\n");
printf("\n");
return 0;
}
