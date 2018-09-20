#include<stdio.h>

#define MAX_WIDTH 14
#define MAX_HEIGHT 14

int main(void) {
	int t = 0, k = 0, n = 0;
	int arry[MAX_WIDTH+1][MAX_HEIGHT] = { 0 };
	int i, j, c, z;

	for (j = 0; j < MAX_WIDTH; j++) {
		arry[0][j] = (j + 1); //0Ãþ ÃÊ±âÈ­
	}
	for (j = 1; j <= MAX_HEIGHT; j++) {
		for (c = 0; c < MAX_WIDTH; c++) {
			for (z = 0; z <= c; z++) {
				arry[j][c] += arry[j - 1][z];
			}
		}
	}

	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%d %d", &k, &n);
		printf("%d\n", arry[k][n - 1]);
	}

	return 0;
}