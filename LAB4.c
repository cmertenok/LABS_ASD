#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 10
int MTX[N][N] = { 
	{ -2, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, -2, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, -1, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, -1, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 2, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 2 } };


int main(){

	int answer;
	printf("Input your number:\n");
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

	return 0;
	}