#include<stdio.h>
int main() {
	int x,a;
	scanf_s("%d", &x);
	for (a = 0; x > a; a = a+1) {
		}
	if (x == 2 * a) {
		printf_s("even number");
	}
	else {
		printf_s("odd number");
	}
	return 0;
}