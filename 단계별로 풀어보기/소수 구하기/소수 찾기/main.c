#include<stdio.h>

int IsPrime(int num) {
	int i;

	if (num == 1) {
		return 0;
	}
	else {
		for (i = 2; i < num; i++) {
			if (!(num % i)) {
				return 0;
			}
		}
	}

	return 1;
}

int main(void) {
	const int MAX_N = 100, MAX_NUM = 1000;
	int n = 0, num = 0, primeNumCount = 0;
	int i;

	scanf("%d", &n);
	if (n > MAX_N) {
		printf("N은 100이하입니다.\n");
	}
	else {
		for (i = 0; i < n; i++) {
			scanf("%d", &num);
			if (num > MAX_NUM) {
				printf("NUM은 1000이하입니다.\n");
				break;
			}

			primeNumCount += IsPrime(num);
		}
	}

	printf("%d\n", primeNumCount);
	return 0;
}