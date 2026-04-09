#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    int arr[] = {12, 6, 5, 9, 2, 7, 3, 10};

    cout << "Sebelum Sorting Selection Sort" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for(int i = 0; i < n; i++)
    {
        int min_idx = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    cout << "\nSetelah Sorting Selection Sort" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}