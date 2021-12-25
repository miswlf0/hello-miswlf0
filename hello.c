#include <stdio.h>

/* Init'ed by Lifu.Wang */

#define MAKEFILE_SUPPORT 1

int is_xmas(int month, int day) {

	printf("is_xmas: Checking %d/%d...\n", month, day);
	if (month == 12 && day == 25) 
		printf("  Hey! Merry X'mas!\n");
	else {
		printf("  Hello, NOT Xmas yet\n");
		return 1;
	}
	return 0;
}

int main(int argc, char **argv) {

	printf("main: started\n");
	is_xmas(12, 25);
	is_xmas(10, 28);
	printf("main: done\n");
	return 0;
}
