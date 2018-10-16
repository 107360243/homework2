#include<stdio.h>
#include<stdlib.h>

int main() {
	float a, b, c, d, e,f;
	for (; ;) {
		printf("Enter account number (-1 to end):");
		scanf_s("%f", &a);
		if(a==-1)
		{
			break;
		}
		printf("Enter beginning balance:");
		scanf_s("%f", &b);
		printf("Enter total charges:");
		scanf_s("%f", &c);
		printf("Enter total credits:");
		scanf_s("%f", &d);
		printf("Enter credits limit:");
		scanf_s("%f", &e);
		f = b + c - d;

		if (f>e)
		{
			printf("Account:%d\n", (int)a);
			printf("Credits limit:%f\n", e);
			printf("Balance%f:\n", b + d);
			printf("Credits limit Exceeded.");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}