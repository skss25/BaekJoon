#include<stdio.h>
#define MAX_HW 99
#define MIN_HW 1
int main(void) {
	int t = 0, i;
	int H = 0, W = 0, N = 0;
	int R = 0, P = 0, roomNum = 0; //³ª¸ÓÁö¿Í ¸ò

	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%d %d %d", &H, &W, &N);
		if ((H > MAX_HW || H < MIN_HW) || (W > MAX_HW || W < MIN_HW)
			|| (N < MIN_HW || N > H * W)){
			printf("(1 ¡Â H, W ¡Â 99, 1 ¡Â N ¡Â H ¡¿ W)\n");
			break;
		}
		
		R = (N % H);
		if (R != 0) {
			R *= 100;
			P = (N / H) + 1;
		}
		else {
			R = H * 100;
			P = (N / H);
		}
		roomNum = R + P;
		printf("%d\n", roomNum);
	}
	return 0;
}