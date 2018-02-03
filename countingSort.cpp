
#include <iostream>


using namespace std;

void countingsort(int arrayIn[], int arrayOut[], int max, int size)
{
	int i;
	int *arrayC = new int[max + 1];

	for (i = 0; i <= max; i++) 	arrayC[i] = 0;

	for (i = 0; i < size; i++)	arrayC[(arrayIn[i])]++;

	for (i = 1; i <= max; i++)  arrayC[i] += arrayC[i - 1];

	for (i = size - 1; i >= 0; i--)
	{
		arrayOut[(arrayC[(arrayIn[i])]) - 1] = arrayIn[i];
		arrayC[(arrayIn[i])]--;
	}
}

int max(int tablica[], int rozmiar)
{
	int max = tablica[0];
	for (int i = 1; i < rozmiar; i++)
	{
		if (max < tablica[i])
			max = tablica[i];
	}
	return max;
}

int main()
{
	int n, i;
	cerr << "n = ";
	cin >> n;

	int *arrayIn = new int[n];
	int *arrayOut = new int[n];

	for (i = 0; i < n; i++)  cin >> arrayIn[i];

	int maxElement = max(arrayIn, n);

	countingsort(arrayIn, arrayOut, maxElement, n);

	for (i = 0; i < n; i++)	cout << arrayOut[i] << " ";

	return 0;
}

