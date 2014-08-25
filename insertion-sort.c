#include <stdio.h>

void insertion(int a[], int n)
{
	int i, j, v;
	for (i = 1; i < n; i++) {
		v = a[i];
		j = i;
		while (a[j-1] > v) {
			a[j] = a[j-1];
			j--;
		}
		a[j] = v;
	}
}

int a[] = {4,2,6,5,8,1,11};

main()
{
	int k = 0;
	int n = 6;
	insertion(a,n);
	while (a[k] != 0) {
		printf("%d ",a[k]);
		k++;
	}
}
	


