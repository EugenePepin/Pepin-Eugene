#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main() {
	setlocale (LC_CTYPE,"ua");
  int s=0,i=0,ar,vd;
	label1:
			printf(" ���������� ���������� ����������� ���� ����� � �i������i [0,30] \n");
			printf(" �����i��, ���� ����� ����������� ������� \n \n");
			printf(" ����i�� ����� (1), ���� ������ (for) \n");
		       printf(" ����i�� ����� (2), ���� ������ (while) \n");
		       printf(" ����i�� ����� (3), ���� ������ (do-while) \n \n");
	              printf(" ���� �i����i�� : ");
		       scanf("%d", &vd);
		       printf("\n");
		if ( vd !=1 && vd !=2 && vd !=3 ) {
			printf (" �����i��� ��������i��� �������� ����� �� ��������� �� ��� \n \n");
		goto label1;}
			switch (vd) {
				case 1 :  // ����� for
				 for  (i=0;i <=30; i++) 
					s+=i;
				ar= s/i;
			               printf(" ������ ����������� ���� ����� � �i������i [0,30] ������� (for) = %d \n \n ", ar); return 0;                           							              
			case 2:   // ����� while
			i=0;
			        while ( i<=30 ) {
				  s+=i;
                             i++; ar= s/i;  }  
				printf(" ������ ����������� ���� ����� � �i������i [0,30] ������� (while) = %d \n \n", ar); return 0;				                                                
			 case 3 :    // ����� do-while
			i=0;
				do {
				  s+=i; 
				i++;
				     }			
                             while ( i<=30); 
			ar= s/i;
				printf(" ������ ����������� ���� ����� � �i������i [0,30] ������� (do-while) = %d \n \n", ar); 
			return 0;
}	
return 0; 
}
