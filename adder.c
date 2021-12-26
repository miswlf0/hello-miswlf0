/*
 * simple adder function
 */
#include <stdio.h>
#include <stdlib.h>

int adder(int x, int y) {

	if (x <= 0)
		return -1;

	if (y <= 0) 
		return -1;

	return x+y;
}

int main(int argc, char **argv) {

	int x,y;

	if (argc < 3) {
		printf("Insufficient args: Usage: a.out x y\n");
		return -1;
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("adder(%d, %d) = %d\n", x, y, adder(x,y));
	return 0;
}
