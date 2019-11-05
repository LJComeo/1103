#include <iostream>
using namespace std;

void BuSort(int arr[],int n)
{
	int i, j, tmp;
	for (i = 0; i < n ; i++)
	{
		for (j = 0; j < n-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main1()
{
	int arr[5] = { 3, 2, 5, 4, 1 };
	BuSort(arr, 5);

	for (auto &i : arr)
	{
		cout << i << ' ';
	}

	return 0;
}