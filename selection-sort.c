#include <stdio.h>

int b[] = {5,8,2,5,4,9};

void selection(int a[],int n)
{
	int i, j, t, min;

	for (i = 0;i < n;i++) {
		min = i;
		for (j = i+1; j <= n; j++) {
			if (a[j] < a[min])
				min = j;
			t = a[min];a[min] = a[i];a[i] = t;
		}
	}
}

main()
{
	int i;
	int n = 6;
	selection(b,n);
	for (i = 1 ;i <= n;i++)
		printf("%d ",b[i]);
}
