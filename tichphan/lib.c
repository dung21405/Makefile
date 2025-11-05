#include "lib.h"

float fx(float x)
{
	return x*x;
}

float tinh_tich_phan(float a, float b, int sample)
{
	float kq = 0;
	float h = (b-a)/sample;
	for(int i=0; i<sample; i++)
	{
		float dBe = fx(a + i*h);
		float dLon= fx(a +(i+1)*h);
		kq += (dBe + dLon)/2*h;
	}
	return kq;
};
