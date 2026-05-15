#include <iostream>
using namespace std;

class kendaraan
{
protected:
    string merk;
    string jenis;
    int tahun;
    double harga;

public: kendaraan(string m, string j, int t, double h)
    {
        merk = m;
        jenis = j;
        tahun = t;
        harga = h;
    }

    virtual void Bersuara()
    {
        cout << "Beep Beep!" << endl;
    }

};

class mobil : public kendaraan
{
    private:
        int jumlahPintu;
        string mesin;
        int gajiDriver;
    
    public:
    mobil(string m, string j, int t, double h, int pintu, string msn) : kendaraan(m, j, t, h), jumlahPintu(pintu), mesin(msn) {
        gajiDriver = 0;
    }

    void setGajiDriver(int gaji) {
        gajiDriver = gaji;
    }

    int getGajiDriver() {
        return gajiDriver;
    }

    void Bersuara() {
        cout << "Mobil " << merk << " mengeluarkan suara: Vroom Vroom!" << endl;
    }

    void spesifikasi() {
        cout << "Jumlah Pintu: " << jumlahPintu << endl;
        cout << "Mesin: " << mesin << endl;
    }
};

int main()
{
    mobil mobil1("Toyota", "SUV", 2020, 500000000, 4, "V6");
    mobil1.Bersuara();
    mobil1.spesifikasi();
    mobil1.setGajiDriver(5000000);
    cout << "Gaji Driver: Rp " << mobil1.getGajiDriver() << endl;

    return 0;
}