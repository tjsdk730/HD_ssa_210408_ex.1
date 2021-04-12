#include<stdio.h>

void main() {
	
	for (int x = 1; x <= 9; x++) {
		for (int y = 1; y <= 9; y++) {
			printf("%d * %d = %d\n", y, x, y * x);
		}
	}
	fgetc(stdin);
}

