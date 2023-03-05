#include <iostream>

using namespace std;
void bubble(int array[], int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++) {
			if (array[j] > array[j + 1]) {
				swap(array[j], array[j + 1]);
			}
		}
	}

}
void printer(int array[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << '\n';
	}
}

int main() {
	int arr[] = { 5, 2, 3, 2 };
	int size = sizeof(arr) / sizeof(arr[0]);//size of int = 4
	bubble(arr, size);
	printer(arr, size);
	return 0;
}