#include <iostream>
using namespace std;


int partition(int arr[], int low, int high) 
{
    int pivot = arr[high]; 
    int i = (low - 1); 

    for(int j = low; j <= high - 1; j++) 
	{
        if (arr[j] < pivot) 
		{
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}


void quickSort(int arr[], int low, int high) 
{
    if(low < high) 
	{
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


void printArray(int arr[], int size) 
{
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() 
{
    int data_nisn[] = {105, 102, 108, 101, 109, 104, 107};
    int n = sizeof(data_nisn) / sizeof(data_nisn[0]);

    cout << "Sebelum sort: ";
    printArray(data_nisn, n);

    quickSort(data_nisn, 0, n - 1);

    cout << "Setelah sort: ";
    printArray(data_nisn, n);

    return 0;
}
