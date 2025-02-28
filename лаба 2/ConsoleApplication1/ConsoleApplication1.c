#include <stdio.h>
#include <locale.h>



 main()
{
	setlocale(LC_ALL, "russian");
	int a, b, c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	if (a % 2 == 0){	
		 printf("чёт");
	}
	else if (c % 2 == 0){
		 printf("чёт\n");
	}
	else if (b % 2 == 0){
		 printf("чёт\n");
	}
	else {
		printf("нечёт\n");
	}
	getch(0);
}