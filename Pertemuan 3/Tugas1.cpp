#include <iostream>
using namespace std;

int main() 
{
    int x[] = {0, 6, 12, 18, 24};
    int jumlah = 5;
    int cari;

    cout << "Masukan data yang dicari: ";
    cin >> cari;
    
    int tm = 0;
    int L = 0;
    int R = jumlah - 1;
    int mid;

    while(L <= R) 
    {
        mid = (L + R) / 2;
        if(x[mid] == cari) 
        {
            cout << "Bilangan " << cari << " ditemukan pada indeks ke-" << mid << endl;
            tm = 1;
            break;
        } 
        else if(x[mid] < cari) 
        {
            L = mid + 1;
        } 
        else 
        {
            R = mid - 1;
        }
    }

    if(tm == 0) 
    {
        cout << "Bilangan tidak ditemukan dalam array." << endl;
    }

    return 0;
}
