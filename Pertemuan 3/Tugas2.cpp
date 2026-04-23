#include <iostream>
#include <string>
using namespace std;

struct Buku 
{
    string judul;
    string rak;
};

int main() 
{
    int i, n;
    cout << "Masukkan jumlah buku: ";
    cin >> n;
    cin.ignore();

    Buku daftarBuku[n];

    for(i = 0; i < n; i++) 
    {
        cout << "\nBuku ke-" << i+1 << endl;
        cout << "Judul: ";
        getline(cin, daftarBuku[i].judul);
        cout << "Rak: ";
        getline(cin, daftarBuku[i].rak);
    }

    cout << "\n============================================" << endl;
    cout << "                DAFTAR BUKU                 " << endl;
    cout << "============================================" << endl;
    cout << "No.\tJudul Buku\t\tRak" << endl;
    cout << "--------------------------------------------" << endl;

    for(i = 0; i < n; i++) 
    {
        cout << i + 1 << "\t" << daftarBuku[i].judul << "\t\t\t" << daftarBuku[i].rak << endl;
    }

    cout << "--------------------------------------------" << endl;

    return 0;
}
