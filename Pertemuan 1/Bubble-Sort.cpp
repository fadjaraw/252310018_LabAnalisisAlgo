#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int arr[] = {4, 8, 3, 6, 1, 23};

    cout << "Sebelum Sorting bubble sort" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }

        cout << "\nSetelah Sorting bubble sort ke-" << i + 1 << endl;
        for(int i = 0; i < n; i++)        
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}