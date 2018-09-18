#include<stdio.h>
#include<stdlib.h>
#define MAX_N 7

int main(void) {
	char n[MAX_N], set[9] = { 0 };
	int i, len = 0, idx = 0, numSet = 0;

	scanf("%s", n);
	if (atoi(n) > 1000000 || atoi(n) < 0) {
		printf("N은 1,000,000보다 작거나 같은 자연수 또는 0이다.\n");
		return 0;
	}

	len = strlen(n);
	for (i = 0; i < len; i++) {
		idx = n[i] - '0';
		if (idx == 9) {
			idx = 6;
		}
		set[idx] += 1;
	}
	numSet = set[6];
	set[6] /= 2;
	if ((numSet % 2) != 0) {
		set[6] += 1;
	}

	numSet = set[0];
	for (i = 1; i < 9; i++) {
		if (numSet < set[i]) {
			numSet = set[i];
		}
	}
	printf("numSet: %d\n", numSet);
	return 0;
}