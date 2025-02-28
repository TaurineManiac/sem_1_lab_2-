#include<stdio.h>
#include<math.h>
#include<locale.h>

main() 
{   
	setlocale(LC_ALL, "russian");
	int K;
	scanf_s("%d", &K);

		if (K == 1)
		{
			printf("Мне 1 год");

		}
		else if (K == 3 || K == 4 || K == 2)
		{
			printf("Мне %d ", K);
			printf(" года");
		}
		else
		{
			printf("Мне %d", K);
			printf(" лет");
		}

	




}