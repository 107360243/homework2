#include<stdio.h>
#include<stdlib.h>
int main() {
	int b, c, d, e, f, g;
	printf("(A)");
	for(b=1;b<=12;b++)
	{
		printf(" ");
	}
	printf("(B)");
	for (b = 1; b <= 12; b++)
	{
		printf(" ");
	}
	printf("(C)");
	for (b = 1; b <= 12; b++)
	{
		printf(" ");
	}
	printf("(D)\n");
	for (b = 0; b <= 9; b++) {
		for (c = 1; c <= (b + 1); c++) {
			printf("*");
		}
		for (d = 14; d >= (b + 1); d--) {
			printf(" ");
		}
		for (e = 11; e >(b + 1); e--) {
			printf("*");
		}
		for (f = -3; f <= (2*b+1); f++) {
			printf(" ");
		}
		for (g = 9; g > (b - 1); g--) {
			printf("*");
		}
		for (d = 14; d >= (b - 1); d--) {
			printf(" ");
		}
		for (c = 1; c <= (b + 1); c++) {
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}