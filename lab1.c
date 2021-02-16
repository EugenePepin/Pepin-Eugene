#include <stdio.h>
#include <locale.h>
#include <math.h> 
int main() {
	int a,b,sa,sg;
	setlocale (LC_CTYPE,"ua");
	printf("\n Визначення середньої арифметичної та геометричної. \n");
	printf("\n Число a= ");
        scanf("%d",&a);
        printf("\n Число b= ");
	scanf("%d",&b);
	sa = (a+b)/2; 
	printf("\n Середнє арифметичне= ");
        printf("%d\n", sa);
	sg = sqrt(a*b);
        printf("\n Середнє геометричне= ");
        printf("%d\n", sg);	   
	printf("\n");
return 0;
}
