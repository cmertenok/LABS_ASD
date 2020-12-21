#include <stdio.h>

int main()
{
	int A[9][7] = {
	{53,21,43,73,97,75,63},          
	{51,34,25,83,33,85,14},
	{45,42,39,64,91,64,24},
	{46,26,10,44,92,70,82},
	{52,52,28,59,95,19,93},
	{25,60,56,41,76,34,58},
	{73,89,88,29,48,92,97},
	{84,79,77,38,87,54,64}
	};

	printf("The initial matrix is:\n\n");
	for (int f = 0; f < 8; f++)
	{
		for (int g = 0; g < 7; g++)
			printf(" %d", A[f][g]);
		printf("\n");
	}
	printf("\n");

	int i, j, L, R;
	int n = 9;
	float T;

	for (int column = 0; column <= 6; column++) {
		for (i = 1; i < n - 1; i++) {
			T = A[i][column];
			L = 0;
			R = i;

			while (L < R) {
				j = (L + R) / 2;

				if (A[j][column] <= T) {
					L = j + 1;
				}
				else {
					R = j;
				}
			}
			for (int k = i - 1; k >= R; k--) {

				A[k + 1][column] = A[k][column];
			}
			A[R][column] = T;
		}
	}
	printf("The sorted matrix is:\n\n");
	for (int f = 0; f < 8; f++)
	{
		for (int g = 0; g < 7; g++)

			printf(" %d", A[f][g]);
		printf("\n");
	}
}
