#include <iostream>

using namespace std;

void swap(int a[], int i)
{
	int temp = a[i];
	a[i] = a[i+1];
	a[i+1] = temp;
}
// time complexity bu siralamada n*n oluyor
void bubbleSort(int a[], int s, int i=0)
{

	for (int j = 0; j < s-1; j++)
		if (a[j+1] < a[j])
			swap(a, j);

	if(++i != s)
		bubbleSort(a, s, i);
}

void print(int a[], int s)
{
	for (int i = 0; i < s; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main()
{
	
	const int size = 10;
	int array[size];
	for (int i = 0; i < size; )
		cin >> array[i++];

	bubbleSort(array, size);

	print(array, size);
}
