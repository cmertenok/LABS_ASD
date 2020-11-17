
#include <stdio.h>
#include <math.h>

int main() {

	int n;
	double S = 0;
	double up = 0;
	double down = 1;
	int counter = 0;
	printf("Input your n: ");
	scanf_s("%d", &n);

	
	for (int i = 1; i <= n; i++) {
	
	    up = 3 - sin(i) * sin(i);
		counter += 4;
		down *= (log(i + 2));
		counter += 3;
		S += (up / down);
		counter += 2;
	}
	
	
	printf("The amount of operations: %d \n", counter);
	printf("Result: %.7f", S);

	return 0;
    
}
