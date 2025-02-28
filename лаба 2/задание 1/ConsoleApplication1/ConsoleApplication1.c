#include<stdio.h>
#include<locale.h>
#include<math.h>
int a,b,c;
main() 
{
	setlocale(LC_ALL, "russian");
	scanf_s("%d%d%d", &a, &b, &c);
	
	if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0) 
	{
		printf("ДА");
	}
	else 
	{
		printf("НЕТ");
	}
}