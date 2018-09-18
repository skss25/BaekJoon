#include<stdio.h>
#define MAX_MN 1000000
#define MIN_MN 1

int main(void) {
	int m = 0, n = 0, divCount = 0;
	char primeArr[MAX_MN+1] = { 0, 1, 0 };
	int i, j;

	scanf("%d %d", &m, &n);
	if ((MIN_MN > m || MAX_MN < m) || (MIN_MN > n || MAX_MN < n) || (m > n)) {
		printf("M과 N의 범위: (1≤M≤N≤1,000,000)\n");
		return 0;
	}
	
	for (i = 2; i <= MAX_MN; i++) {
		if (primeArr[i] != 1) { 
			for (j = 2; (i*j) < (MAX_MN+1); j++) {
				primeArr[i*j] = 1;
			}
		}
	}

	for (i = m; i <= n; i++) {
		if (primeArr[i] != 1) {
			printf("%d\n", i);
		}
	}
	return 0;
}