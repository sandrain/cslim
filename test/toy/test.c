#include "test.h"

void aa_0(void)
{
	aa_9();
	dd_0();
	dd_4();
	cc_3();
	printf("aa_0\n");
}

void aa_1(void)
{
	bb_1();
	cc_3();
	printf("aa_1\n");
}

void cc_2(void)
{
	printf("cc_2\n");
}

void bb_3(void)
{
	cc_2();
	printf("bb_3\n");
}

void aa_4(void)
{
	cc_5();
	printf("aa_4\n");
}

void dd_5(void)
{
	bb_0();
	printf("dd_5\n");
}

