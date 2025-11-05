#include "lib.h"

int main()
{
	float x = 4.3;
	float a = 2, b = 3.5;
	int sample = 100;
	float dientich = tinh_tich_phan(a, b, sample);
	printf("Dien tich = %.2f", dientich);
	return 0;
}
