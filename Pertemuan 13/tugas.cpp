#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Item 
{
    int key;
    string nama;
    bool kosong = true;
    bool dihapus = false;
};

class HashTable 
{
    private:
        vector<Item> table;
        int ukuran;
    public:
        HashTable(int n) 
        {
            ukuran = n;
            table.resize(ukuran);
        }

        int hashFunction(int key) 
        {
            return key % ukuran;
        }

        void insert(int key, string nama) 
        {
            int index = hashFunction(key);

            for (int i = 0; i < ukuran; i++) 
            {
                int pos = (index + i) % ukuran;
                if (table[pos].kosong || table[pos].dihapus) 
                {
                    table[pos].key = key;
                    table[pos].nama = nama;
                    table[pos].kosong = false;
                    table[pos].dihapus = false;
                    cout << "Data berhasil disimpan pada index " << pos << endl;

                    return;
                }
            }

            cout << "Hash Table penuh!" << endl;
        }

        void hapus(int key) 
        {
            int index = hashFunction(key);
            for (int i = 0; i < ukuran; i++) 
            {
                int pos = (index + i) % ukuran;

                if (table[pos].kosong)
                break;

                if (!table[pos].dihapus && table[pos].key == key) 
                {
                    table[pos].dihapus = true;
                    cout << "Data berhasil dihapus." << endl;
                    return;
                }
            }
            cout << "Data tidak ditemukan." << endl;
        }

        void cari(int key) 
        {
            int index = hashFunction(key);

            for (int i = 0; i < ukuran; i++)
            {
                int pos = (index + i) % ukuran;

                if (table[pos].kosong)
                break;

                if (!table[pos].dihapus && table[pos].key == key) 
                {
                    cout << "\nItem ditemukan\n";
                    cout << "Key : " << table[pos].key << endl;
                    cout << "Nama : " << table[pos].nama << endl;
                    cout << "Index : " << pos << endl;
                    return;
                }
            }
            cout << "Item tidak ditemukan." << endl;
        }

        void tampil()
        {
            cout << "\n===== Isi Hash Table =====\n";

            for (int i = 0; i < ukuran; i++)
            {
                cout << "[" << i << "] ";
                if (!table[i].kosong && !table[i].dihapus)
                cout << table[i].key << " - " << table[i].nama;
                else
                cout << "-";
                cout << endl;
            }
        }
};

int main() 
{
    int ukuran;
    cout << "Masukkan ukuran Hash Table : ";
    cin >> ukuran;

    HashTable inventory(ukuran);
    int pilih;

    do {
        cout << "\n=== INVENTORY MANAGEMENT ===\n";
        cout << "1. Insert Item\n";
        cout << "2. Hapus Item\n";
        cout << "3. Cari/Lihat Item\n";
        cout << "4. Tampilkan Semua\n";
        cout << "0. Keluar\n";
        cout << "Pilihan : ";
        cin >> pilih;

        switch (pilih) {
            case 1: {
                int key;
                string nama;
                cout << "Masukkan nama item : ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan key : ";
                cin >> key;
                inventory.insert(key, nama);
                break;
            }

            case 2: {
                int key;
                cout << "Masukkan key yang akan dihapus : ";
                cin >> key;
                inventory.hapus(key);
                break;
            }

            case 3: {
                int key;
                cout << "Masukkan key yang dicari : ";
                cin >> key;
                inventory.cari(key);
                break;
            }

            case 4:
                inventory.tampil();
                break;

            case 0:
                cout << "Program selesai.\n";
                break;

            default:
                cout << "Pilihan tidak valid.\n";
        }

    } while (pilih != 0);

    return 0;
}