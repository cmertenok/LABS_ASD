#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 10
int MTX[N][N] = {
	{ -1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, -1, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, -1, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } };


int main() {

	for (int R = 0; R < N; R++) {
		for (int C = 0; C < N; C++) {
			printf("%d ", MTX[R][C]);
		}
		printf("\n");
	}

	int answer;
	printf("\nInput your number: ");
	scanf("%d", &answer);
	int low = 0;
	int high = N - 1;
	int coords;
	while (low < high)
	{
		int mid = (high + low) / 2;
		coords = mid;
		if (answer == MTX[mid][mid])
		{
			printf("Found number at (%d,%d)\n", mid, mid);
			break;
		}
		else if (answer < MTX[mid][mid])
			high = mid - 1;
		else if (answer > MTX[mid][mid])
			low = mid + 1;

	}
	if (answer != MTX[coords][coords])
		printf("This number doesnt exist in matrix!\n");

	return 0;
}
