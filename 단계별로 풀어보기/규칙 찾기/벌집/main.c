#include<stdio.h>

int main(void) {
	int N = 0;
	int btwNum = 0, numRange = 1, numRoom = 1;
	//���� ������ �� ����, ���� ����, �ش� ���� ����

	scanf("%d", &N);
	if (N < 1 || N > 1000000000) {
		printf("N(1 �� N �� 1,000,000,000)�� �־�����.\n");
		return 0;
	}

	//Ż�� ����: N�� ���� ������ �ش�Ǹ� ���� ���� ȹ��
	while (1) {
		numRange += btwNum;
		if (N <= numRange) {
			break;
		}

		numRoom += 1; 
		btwNum += 6; //�� ���� �������� ���� ������ 6�� �����Ѵ�.
	}

	printf("%d\n", numRoom);
	return 0;
}