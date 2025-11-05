#include "caculate.h"

typedef enum
{
	cong,
	tru,
	nhan,
	chia
}Phep_tinh;

int main()
{
	int a=0, b=0, n=0;

	printf("Nhap a va b:");
	scanf("%d%d", &a, &b);
	printf("Nhap nhep tinh:");
	scanf("%d", &n);
	switch(n)
	{
		case cong:
			n =sum(&a, &b);
				break;
		case tru:
			n =sub(&a, &b);
			break;
		case nhan:
			n = multi(&a, &b);
			break;
		case chia:
			n = division(&a, &b);
	}
	printf("Retult = %d.\n", n);
	return 0;
}
