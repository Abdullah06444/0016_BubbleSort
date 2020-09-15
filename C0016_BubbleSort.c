#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 10

void swap(int a[], int i)
{
	int temp = a[i];
	a[i] = a[i + 1];
	a[i + 1] = temp;
}
// time complexity bu siralamada log n oluyor
void bubbleSort(int a[], int s, int i)
{

	for (int j = 0; j < s-i-1; j++)
		if (a[j + 1] < a[j])
			swap(a, j);

	if (++i != s)
		bubbleSort(a, s, i);
}

void print(int a[], int s)
{
	for (int i = 0; i < s; i++)
		printf("%d ", a[i]);
	printf("\n");
}

int main()
{

	int array[size];
	for (int i = 0; i < size; )
		scanf("%d", &array[i++]);

	bubbleSort(array, size, 0);

	print(array, size);
}
