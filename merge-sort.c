#include <stdio.h>

int b[8];

void mergesort(int a[], int l, int r)
{
	int i, j, k, m;
	if (r > l)
	{
		m = (r+l)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		for (i = m+1; i > l; i--) b[i-1] = a[i-1];
		for (j = m; j < r;j++) b[r+m-j] = a[j+1];
		for (k = l;k<=r;k++)
			a[k] = (b[i] < b[j]) ? b[i++] : b[j--];
	}
}

main()
{
	int a[] = {19,1,9,7,6,8};
	mergesort(a,0,5);
	int x = 0;
	while (a[x] != 0)
		printf("%d ",a[x++]);
}
