#include "caculate.h"

int sum(int* a, int* b)
{
	return *a + *b;
}

int sub(int* a, int* b)
{
	return *a - *b;
}

int multi(int* a, int* b)
{
	return (*a)*(*b);
}

int division(int* a, int* b){
	if(*b == 0)
		return -1;
	return *a/(*b);
}
