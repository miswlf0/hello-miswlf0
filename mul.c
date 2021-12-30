/*
 * simple multipler 
 */
#include <stdio.h>
#include <stdlib.h>

int mul(int x, int y) {

	if (x <= 0 || y <= 0) 
		return 0;
	return x * y;
}

int main(int argc, char **argv) {

	int x,y;

	if (argc < 3) {
		printf("Insufficient args: Usage: a.out x y\n");
		return -1;
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("mul(%d, %d) = %d\n", x, y, mul(x,y));
	return 0;
}
