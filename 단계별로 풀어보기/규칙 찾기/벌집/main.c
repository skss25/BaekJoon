#include<stdio.h>

int main(void) {
	int N = 0;
	int btwNum = 0, numRange = 1, numRoom = 1;
	//숫자 사이의 방 개수, 수의 범위, 해당 방의 개수

	scanf("%d", &N);
	if (N < 1 || N > 1000000000) {
		printf("N(1 ≤ N ≤ 1,000,000,000)이 주어진다.\n");
		return 0;
	}

	//탈출 조건: N이 수의 범위에 해당되면 방의 개수 획득
	while (1) {
		numRange += btwNum;
		if (N <= numRange) {
			break;
		}

		numRoom += 1; 
		btwNum += 6; //각 수의 범위에서 방의 개수는 6씩 증가한다.
	}

	printf("%d\n", numRoom);
	return 0;
}