#include <iostream>
#include <fstream>      // Library untuk membaca dan menulis file
#include <string>
using namespace std;

class AtbashCipher {
public:
    string encrypt(string text) {
        for (int i = 0; i < text.length(); i++) {     
            char c = text[i];                         

            
            if (c >= 'A' && c <= 'Z') {
                text[i] = 'Z' - (c - 'A');            
            }
            else if (c >= 'a' && c <= 'z') {
                text[i] = 'z' - (c - 'a');            
            }         
        }
        return text;                                 
    }

    void saveToFile(string filename, string text) {
        ofstream file(filename.c_str(), ios::app);   
                                                     
        if (file.is_open()) {                        
            file << text << endl;                    
            file.close();                            
            cout << "Data berhasil disimpan ke file.\n";
        } else {
            cout << "Gagal membuka file.\n";
        }
    }

    void readFile(string filename) {
        ifstream file(filename.c_str());             
        string line;

        if (file.is_open()) {                        
            cout << "\n=== ISI FILE ===\n";
            while (getline(file, line)) {            
                cout << line << endl;                
            }
            file.close();                            
        } else {
            cout << "File tidak ditemukan.\n";
        }
    }
};

int main() {
    AtbashCipher cipher;

    string text;
    string hasil;
    string namaFile;

    cout << "Masukkan nama file: ";
    getline(cin, namaFile);

    
    ofstream file(namaFile.c_str(), ios::app);       
    file << "Pesan Yang Dienkripsi:" << endl;
    file.close();

    char ulang;

    do {
        cout << "\n=== ATBASH CIPHER ===\n";
        cout << "Masukkan teks : ";
        getline(cin, text);

        hasil = cipher.encrypt(text);                

        cout << "Hasil Enkripsi : " << hasil << endl;

        cipher.saveToFile(namaFile, hasil);          

        cout << "\nInput lagi? (Y/T) : ";
        cin >> ulang;
        cin.ignore();                                

    } while (ulang == 'Y' || ulang == 'y');          

    cipher.readFile(namaFile);                       

    return 0;
}
