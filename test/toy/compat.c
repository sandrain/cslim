#include "compat.h"

void aa_9(void)
{
	dd_0();
	printf("aa_9\n");
}

void dd_0(void)
{
	bb_0();
	printf("dd_0\n");
}

void dd_4(void)
{
	bb_0();
	printf("dd_4\n");
}

void cc_3(void)
{
	printf("cc_3\n");
}

void bb_1(void)
{
	cc_2();
	printf("bb_1\n");
}

void cc_5(void)
{
	printf("cc_5\n");
}

void bb_0(void)
{
	cc_1();
	printf("bb_0\n");
}

void cc_1(void)
{
	printf("cc_1\n");
}

