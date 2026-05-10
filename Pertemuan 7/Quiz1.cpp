#include <iostream>
using namespace std;

void merge(string arr[], int left, int mid, int right) 
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    string L[100], R[100]; 

    for(int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for(int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left; 

    while(i < n1 && j < n2) 
	{
        //Menggunakan >= untuk mengurutkan dari besar ke kecil
        if(L[i] >= R[j]) 
		{
            arr[k] = L[i];
            i++;
        } 
		else 
		{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2) 
	{
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(string arr[], int left, int right) 
{
    if(left < right) {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() 
{
    string angka[] = 
	{
        "2","5","1","6","9","8","3","4","7"
    };

    int n = sizeof(angka) / sizeof(angka[0]);

    cout << "Sebelum sorting:\n"; 
    for (int i = 0; i < n; i++) {
        cout << angka[i] << "\t";
        cout << endl;
    }

    mergeSort(angka, 0, n - 1);
 
    cout << "\nHasil sorting DESCENDING:\n";
    for (int i = 0; i < n; i++) {
        cout << angka[i] << "\t";
         cout << endl;
    }
   

    return 0;
}
