#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,p,s,m,n;
	printf("\nnhap canh a :");
	scanf("%f", &a);
	printf("\nnhap canh b :");
	scanf("%f", &b);
	printf("\nnhap canh c :");
	scanf("%f", &c);
	p = (a+b+c)/2;
	m = p*(p-a)*(p-b)*(p-c);
	s = sqrt(m);
	printf("\ndien tich tam giac la :%.2f", s);
	n = a+b+c;
	printf("\nchu vi hinh tam giac la :%.2f", n);
	return 0;
}