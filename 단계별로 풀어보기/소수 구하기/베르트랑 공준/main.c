#include<stdio.h>
#define MAX_N 246912

int main(void) {
	char arr[MAX_N] = { 1, 0 };
	int primeCount = 0; //¼Ò¼öÀÇ °¹¼ö
	
	int i, j;
	int n = 0;

	while (1) {
		scanf("%d", &n);
		if (n > MAX_N || n == 0) { break; }

		for (i = 1; i < MAX_N; i++) {
			if (arr[i] != 1) { 
				for (j = i + (i + 1); j < MAX_N; j += (i + 1)) {
					arr[j] = 1;
				}
				
				if ((i + 1) > n && (i + 1) <= (n * 2)) {
					primeCount++;
				}
			}
		}

		printf("%d\n", primeCount);
		primeCount = 0;
	}

	return 0;
}