#include <stdio.h>

int gcd(int a, int b)
{
	int t;
	while (a > 0) {
		if (a < b) {t = a;a = b;b = t;}
		a = a-b;
	}
	return b;
}


int gcd2(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd2(b, a % b);
}

int gcd3(int a, int b)
{
	int t;
	while (b > 0) {
		t = b;
		b = a%b;
		a = t;
	}
	return a;
}



main()
{
	printf("%d\n",gcd(8,10));
	printf("%d\n",gcd2(8,10));
	printf("%d\n",gcd3(8,10));
}
