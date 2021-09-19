#include<stdio.h>
int main() {
	int x,a=1;
	scanf_s("%d", &x);
	while (x >= a) {
		if (x == 2 * a) {
			printf_s("even number");
			break;
		}
		else {
			a = a+1;
		}
}
	a = 1;
	while (x >= a) {
		if (x == 2 * a+1) {
			printf_s("odd number");
			break;
		}
		else {
			a = a + 1;
		}
	}
	return 0;
}
