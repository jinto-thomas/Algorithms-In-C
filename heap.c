#include <stdio.h>
/*#define maxn 100
static int a[maxn+1], n;

void construct(int b[], int m)
{
	for (n = 1;n <= m;n++)
		a[n] = b[n];
}

void insert (int v)
{
	a[++n] = v;
}
*/
/*
int remove()
{
	int j, max, v;
	max = 1;
	for (j = 2; j <= n; j++)
		if (a[j] > a[max]) max = j;
	v = a[max];
	a[max] = a[n--];
	return v;
}
*/
/*void upheap(int k)
{
	int v;
	v = a[k]; a[0] = 1000;//INT_MAX
	while (a[k/2] <= v)
	{
		a[k] = a[k/2];
		k /= 2;
	}
	a[k] = v;
}
*/
/*
insert(int v)
{
	a[++n] = v;
	upheap(n);
}
*/
void downheap(int a[],int n,int k)
{
	int j, v;
	v = a[k];
	while (k <= n/2) {
		j = k+k;
		if (j < n && a[j] < a[j+1]) j++;
		if (v >= a[j]) break;
		a[k] = a[j];
		k = j;
	}
	a[k] = v;
}
/*
int remove_h(void)
{
	int v = a[1];
	a[1] = a[n--];
	downheap(1);
	return v;
}

int replace(int v)
{
	a[0] = v;
	downheap(0);
	return a[0];
}
*/

void heapsort(int a[],int n)
{
	int k,t;
	for (k = n/2 ; k >= 0; k--) downheap(a,n,k);
	while (n > 0)
	{
		t = a[0]; a[0] = a[n];a[n] = t;
		downheap(a, --n,0);
	}
}


main()
{
	int a[] = {8,5,2,3,55,7,4,2,43,1};
	heapsort(a,9);
	int x = 0;
	while (a[x] != 0)
		printf("%d ",a[x++]);
}



