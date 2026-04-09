#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    string buku[100];
    int i, j, jml;
    int pilih;

    while(true) 
    {
        cout << "\n=== APLIKASI PENYIMPANAN BUKU ===" << endl;
        cout << "1. Masukkan Judul Buku" << endl;
        cout << "2. Tampilkan Buku" << endl;
        cout << "3. Mensortir Buku" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilih;
        cin.ignore();

        if(pilih == 1) 
        {
            cout << "\nBerapa banyak buku yang ingin dimasukkan: ";
            cin >> jml;
            cin.ignore();

            for(i = 0; i < jml; i++)
            {
                if(n < 100) 
                {
                    cout << "Masukkan judul buku ke-" << i + 1 << ": ";
                    getline(cin, buku[n]);
                    n++;
                } 
                else 
                {
                    cout << "Kapasitas buku sudah penuh!" << endl;
                    break;
                }
            }
            cout << "Buku berhasil ditambahkan!" << endl;
        }
        else if(pilih == 2) 
        {
            if(n == 0) 
            {
                cout << "\nBelum ada buku yang dimasukkan!" << endl;
            } 
            else 
            {
                cout << "\n--- DAFTAR BUKU ---" << endl;
                for(i = 0; i < n; i++) 
                {
                    cout << i + 1 << ". " << buku[i] << endl;
                }
            }
        }
        else if(pilih == 3) 
        {
            if(n == 0) 
            {
                cout << "\nBelum ada buku untuk disortir!" << endl;
            } 
            else 
            {
                for(i = 0; i < n - 1; i++) 
                {
                    for(j = 0; j < n - i - 1; j++) 
                    {
                        if(buku[j] > buku[j + 1]) 
                        {
                            string temp = buku[j];
                            buku[j] = buku[j + 1];
                            buku[j + 1] = temp;

                        }
                    }
                }
                cout << "\n--- BUKU SETELAH DISORTIR ---" << endl;
                for(i = 0; i < n; i++) 
                {
                    cout << i + 1 << ". " << buku[i] << endl;
                }
            }
        }
        else if(pilih == 4) 
        {
            cout << "Terima kasih!" << endl;
            break;
        }
        else 
        {
            cout << "Pilihan tidak valid!" << endl;
        }
    }
}
