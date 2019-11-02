#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

void selection_sort(int arr[], int size);

int main()
{
	const int size = 7;
	int arr[size] = { 1,5,6,2,7,8,345 };
	selection_sort(arr, size);
}

void selection_sort(int arr[], int size)
{
	int min_index, min_value;
	for (int i = 0; i < (size - 1); ++i) {
		min_index = i;		// get index of current element
		min_value = arr[i]; // get value of current element

		// loop remaining elements and find the lowest value
		for (int j = (i + 1); j < size; ++j) {
			if (arr[j] < min_value)
			{
				min_index = j;
				min_value = arr[j];
			}
		}

		// swap values so lowest value is in current position
		arr[min_index] = arr[i];
		arr[i] = min_value;
	}
	// display the array
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
	}
}
