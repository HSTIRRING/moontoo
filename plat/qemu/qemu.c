#include "all.h"

void main(void) {
	int i;
	int sum = 0;

	for (i = 1; i <= 100; i++) {
		sum += i;
	}
	printf("1 + 2 + ... + 100 = %d\n", sum);
	printf("hello world!\n");
}

// r0
void show_num(unsigned int num)
{
	printf("num: 0x%x\n", num);
}

void show_status(void) {
	printf("after swi\n");
}

void svc_handle(void) {
	printf("hello svc\n");
}
