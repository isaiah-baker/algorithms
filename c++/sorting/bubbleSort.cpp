#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void bubble_sort(int arr[], int size);
const int arrSize = 5;

int main()
{
	int arr[5]{ 1,5,2,5,6 };
	bubble_sort(arr, arrSize);

	//display sorted array
	for (int i = 0; i < arrSize; i++) {
		cout << arr[i];
	}
	
}

void bubble_sort(int arr[], int size)
{
	bool is_swap;
	int temp;
	do {
		is_swap = false;
		for (int i = 0; i < (size - 1); i++)
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				is_swap = true;
			}
		}

	} while (is_swap);

}

