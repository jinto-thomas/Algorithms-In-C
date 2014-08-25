#include <stdio.h>

void bubble(int a[], int n)
{
	int i, j, t;
	for (i = n; i >= 0;i--)
		for (j = 1;j <= i;j++)
			if (a[j-1] > a[j]){
				t = a[j-1];
				a[j-1] = a[j];
				a[j] = t;
			}
}

int a[] = {9,3,4,1,4,8,5,3,4,10};
main()
{
	int n = 9;
	bubble(a,n);
	int k = 0;
	while (a[k] != 0){
		printf("%d ",a[k]);
		k++;
	}
}
