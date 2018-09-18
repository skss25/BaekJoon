#include<stdio.h>
#define MAX_N 10000
#define MIN_N 4

int main(void) {
	char arr[MAX_N] = { 1,0 };
	int n = 0;
	int prime = 0, differ = 0, p1 = 0, p2 = 0;
	int t, i, j;

	scanf("%d", &t);
	for (i = 1; i < MAX_N; i++) {
		if (arr[i] != 1) {
			for (j = i + (i + 1); j < MAX_N; j += (i + 1)) {
				arr[j] = 1; //소수의 배수는 모두 1로 변경
			}
		}
	}
	
	for (i = 0; i < t; i++) {
		scanf("%d", &n);
		if ((n < MIN_N) || (n > MAX_N)) {
			printf("n의 범위: (4 ≤ n ≤ 10,000)\n");
			break;
		}
		differ = n - 2;//소수의 차
		
		for (j = 0; j < (n/2); j++) {
			if (arr[j] != 1) { //(j+1)가 소수이면
				prime = n - (j + 1);
				if (arr[prime - 1] != 1) {
					if (differ > (prime - (j + 1))) {
						differ = prime - (j + 1);
						p1 = (j + 1);
						p2 = prime;
					}
				}
			}
		}
		printf("%d %d\n", p1, p2);
	}
	return 0;
}