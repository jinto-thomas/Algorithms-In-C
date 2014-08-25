#include <stdio.h>

void shellsort(int a[],int n)
{
	int i,j,h,temp;
	for (h = n/2;h > 0;h /= 2) {
		for (i = h; i < n;i++)
			for (j = i-h;j >= 0 && a[j] > a[j+1];j -= h) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
	}
}

int main()
{
	int a[10] = {2,4,1,5,7,9,3,6,8,10};
	int n = 10;
	shellsort(a,n);
	int k = 0;
	while (a[k] != 0)
		printf("%d ",a[k++]);
	return 0;
}
