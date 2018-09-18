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
	const int MAX_MN = 10000;

	int m = 0, n = 0;
	int primeSum = 0;
	int minPrime = 10000;

	int i;

	scanf("%d %d", &m, &n);
	if ((m > n) || (m > MAX_MN || n > MAX_MN)) {
		printf("M�� N�� 10,000������ �ڿ����̸�, M�� N���� �۰ų� �����ϴ�.\n");
	}
	else {
		for (i = m; i <= n; i++) {
			if (IsPrime(i)) { //�Ҽ��̸�
				primeSum += i;
				if (minPrime > i) {
					minPrime = i;
				}
			}
		}
	}
	
	if (primeSum != 0) {
		printf("%d\n", primeSum);
		printf("%d\n", minPrime);
	}
	else { 
		printf("-1\n");
	}

	return 0;
}