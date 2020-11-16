#include <stdio.h>


float function1(float x) {
	return (-14 * x - 20);
}

float function2(float x) {
	return (13 * x * x / 11 - 6);
}


int main() {
	float x;
	for (int i = 0; i < 10; i++) {
		printf("Input your number: \n");
		scanf_s("%f", &x);

		if ((x > -21 && x <= 3) || (x > 12))
			printf("Result: %f \n", function1(x));
		else if (x <= -41)
			printf("Result: %f \n", function2(x));
		else
			printf("It cant be solved! \n");
	}
	return 0;
}
