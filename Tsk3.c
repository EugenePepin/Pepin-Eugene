#include <stdio.h>
#include <locale.h>
#include <math.h> 
int main() {
	setlocale (LC_CTYPE,"ua");
       int x,z;
	float y;
	printf("\n Обчислення функцiї з третього завдання 16 варiанту. \n");
        printf("\n Число x=");
        scanf("%d",&x); 
        printf("\n Число z=");
	scanf("%d",&z); 
        if (x>=0) {
		printf ("\n В данному випадку x має бути менше за нуль. \n");
	}
	y = sqrt(log10(1-2*x)/(z+3));
       printf("\n Вiдповiдь = ");
       printf("%f",y); 
       printf("\n");
	printf("\n");
       return 0;
}

