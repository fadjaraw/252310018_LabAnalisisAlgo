#include <iostream>
using namespace std;

class Mahasiswa 
{
private:
    string nama;
    string npm;
    string jurusan;
    float ipk;

public:
    void setNama(string n) 
    {
        nama = n;
    }

    void setNpm(string n) 
    {
        npm = n;
    }

    void setJurusan(string j) 
    {
        jurusan = j;
    }

    void setIpk(float i) 
    {
        ipk = i;
    }

    string getNama() 
    {
        return nama;
    }

    string getNpm() 
    {
        return npm;
    }

    string getJurusan() 
    {
        return jurusan;
    }

    float getIpk() 
    {
        return ipk;
    }
};

int main() 
{
    Mahasiswa mhs;
    string nama, npm, jurusan;
    float ipk;

    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan NPM: ";
    getline(cin, npm);
    cout << "Masukkan Jurusan: ";
    getline(cin, jurusan);
    cout << "Masukkan IPK: ";
    cin >> ipk;

    mhs.setNama(nama);
    mhs.setNpm(npm);
    mhs.setJurusan(jurusan);
    mhs.setIpk(ipk);

    cout << "\nData Mahasiswa " << endl;
    cout << "Nama     : " << mhs.getNama() << endl;
    cout << "NPM      : " << mhs.getNpm() << endl;
    cout << "Jurusan  : " << mhs.getJurusan() << endl;
    cout << "IPK      : " << mhs.getIpk() << endl;

    return 0;
}