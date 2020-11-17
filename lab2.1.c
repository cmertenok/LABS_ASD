#include <stdio.h>
#include <math.h>

int main() {

	int n;
	double S = 0;
	int counter = 0;
	printf("Input your n: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		double down = 1;
		double up = 3 - sin(i) * sin(i);
		counter += 4;
		for (int j = 1; j <= i; j++) {
			down *= (log(j + 2));
			counter += 3;

		}
		S += (up / down);
		counter += 2;

	}

	printf("The amount of operations: %d \n", counter);
	printf("Result: %.7f", S);

	return 0;

}

