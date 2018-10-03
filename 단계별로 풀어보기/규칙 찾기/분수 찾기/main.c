#include<stdio.h>

int main(void) {
	int cnt = 1, flag = 1, x = 0;
	int m = 0, d = 0; //분자, 분모
	int curNum = 0;

	scanf("%d", &x);
	if (x < 1 || x > 10000000) {
		printf("%s", " X(1 ≤ X ≤ 10,000,000)가 주어진다.");
		return 0;
	}

	while (flag != 0) {
		if (!(cnt % 2)) { //짝수인 경우
			for (m = 1, d = cnt; ( d >=1 ) && (m <= cnt); m++, d--) {
				curNum += 1;
				if (curNum == x) {
					printf("%d/%d\n", m, d);
					flag = 0;
					break;
				}
			}
		}
		else {
			for (m = cnt, d = 1; (d <= cnt) && (m >= 1); m--, d++) {
				curNum += 1;
				if (curNum == x) {
					printf("%d/%d\n", m, d);
					flag = 0;
					break;
				}
			}
		}
 		cnt++;
	}
	
	return 0;
}