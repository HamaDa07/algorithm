#include<stdio.h>
//���[�N���b�h�̌ݏ��@

int main(void) {

	int a = 24;
	int b = 36;
	int ans = 0;

	scanf_s("%d", &a);
	scanf_s("%d", &b);

	for (;;) {
		if (b == 0) {
			ans = a;
		}
		else {// (b%a==) or (a%b==0)�ɂȂ�܂�
			if (a > b) {
				ans = a % b;
			}
			else {
				ans = b % a;
			}
			a = b;
			b = ans;
		}
	}

}