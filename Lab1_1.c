# include <stdio.h>

float first(float x) {
	return -14 * x - 20;
}

float second(float x) {
	return 13 * x * x / 11 - 6;
}

int main() {
	float x;
	for (int i = 0; i < 10; i++) {
		printf("Input your number: \n");
		scanf_s("%f", &x);
		printf("result: \n");
		if (x > -21) {
			if (x <= 3) {
				printf("%f \n", first(x));
			}
			else if (x > 12) {
				printf("%f \n", first(x));
			}
			else {
				printf("Cant be solved \n");
			}
		}
		else {
			if (x <= -41) {
				printf("%f \n", second(x));
			}
			else {
				printf("Cant be solved \n");
			}
		}
		printf("\n");
	}
	return 0;
}