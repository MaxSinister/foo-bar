#include <stdio.h>
#include "foobar.h"

int main(void) {
	int foobar = 0;
	foobar += BAZ;
	foobar += BAR;
	printf("%d\n", foobar);
	return foobar;
}
