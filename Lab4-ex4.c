#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main(){
	setlocale (LC_CTYPE,"ua");
    const float a = -6, b = 3, dx = 0.75;
    printf(" Результат обчислення функцiї на промiжку [-6,3] з кроком 0.75 \n");
    printf("\n    | x |\t|y=pow(x,3)| \n");
    for (float i=a; i<= b; i+=dx) {
		printf("\n");
        printf("   |%.2f|\t",i);
	printf("|%.2f|",pow(i,3));
	printf("\n ");
	}
	printf("\n ");
    return 0;
}
