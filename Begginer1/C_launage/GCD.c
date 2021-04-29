#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int a = 24;
	int b = 36;
	int n = a;
	int ans = 0;

	scanf_s("%d", &a);
	scanf_s("%d", &b);

	for (;;)
	{	
		if (a % n == 0 && b % n == 0) {
			ans = n;
			break;
		}
		else {
			n = n - 1;

			if (a % n == 0 && b % n == 0) {
				ans = n;
				break;
			}
		}

	}
	printf("Å‘åŒö–ñ”:%d", ans);
}