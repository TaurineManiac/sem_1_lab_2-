#include<stdio.h>
#include<locale.h>
#include<math.h>

int k;

main() 
{
	
	setlocale(LC_ALL, "RUS");
	scanf_s("%d", &k);
	switch (k) 
	{
	case 1:
		printf("Мне 1 год"); break;
	case 2:
		printf("Мне %d", k);
		printf(" года"); break;
	case 3:
		printf("Мне %d", k);
		printf(" года"); break;
	case 4:
		printf("Мне %d", k);
		printf(" года"); break;
	case 5:
		printf("Мне %d", k);
		printf(" лет"); break;
	case 6:
		printf("Мне %d", k);
		printf(" лет"); break;
	case 7:
		printf("Мне %d", k);
		printf(" лет"); break;
	case 8:
		printf("Мне %d", k);
		printf(" лет"); break;
	case 9:
		printf("Мне %d", k); 
		printf(" лет"); break;
	default:
		printf("ТОЛЬКО ОТ 1 ДО 9"); break;
	
	}
	
	
	



}
