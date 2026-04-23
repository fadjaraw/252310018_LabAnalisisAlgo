#include <iostream>
using namespace std;

int main()
{
    int Nilai[20];
    int posisi[20];
    int i, n, Bil, jml = 0;
    bool ketemu = false;

    cout << "Masukkan jumlah deret bilangan : ";
    cin >> n;
    cout << endl;

    for(i = 0; i < n; i++)
    {
        cout << "Masukkan bilangan ke-" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    cout << "\nDeret bilangan : ";
    for(i = 0; i < n; i++)
    {
        cout << Nilai[i] << " ";
    }

    cout << "\nMasukkan bilangan yang akan dicari : ";
    cin >> Bil;

    for(i = 0; i < n; i++)
    {
        if(Nilai[i] == Bil)
        {
            ketemu = true;
            posisi[jml] = i;
            jml++;
        }
    }

    if(ketemu)
    {
        cout << "\nBilangan " << Bil << " ditemukan sebanyak : " << jml << " kali pada posisi ke : ";
        cout << "\nposisi indeks ke : ";
        for(i = 0; i < jml; i++)
        {
            cout << posisi[i] + 1 << " ";
        }
    }
    else
    {
        cout << "\nBilangan " << Bil << " tidak ditemukan dalam deret.";
    }

}