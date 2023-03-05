#include <iostream>
using std::cout;

void bubblesort(int arr[], int n)
{
    int i, j, temp{};
    for (i = 0; i < n; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                arr[j] = temp;
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}
void print(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = { 8,3,7,5,4,2,3,1,9 };
    int N = sizeof(arr);
    bubblesort(arr, N);
    print(arr, N);
    return 0;
}