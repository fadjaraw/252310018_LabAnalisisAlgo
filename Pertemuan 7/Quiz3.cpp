#include <iostream>
#include <cmath>
using namespace std;

// Class BangunRuang (Base Class)
class BangunRuang {
protected:
    double LUAS_ALAS;
    double VOLUME;
    
public:
    BangunRuang() : LUAS_ALAS(0), VOLUME(0) {}  
    
    virtual void HITUNGLUAS_ALAS() = 0;
    virtual void HITUNGVOLUME() = 0;
    
    double getLuasAlas() {
        return LUAS_ALAS;
    }
    
    double getVolume() {
        return VOLUME;
    }
};

// Class Balok (Derived Class)
class Balok : public BangunRuang {
private:
    double panjang;
    double lebar;
    double tinggi;
    
public:
    Balok() : panjang(0), lebar(0), tinggi(0) {}
    
    void setPanjang(double p) {
        panjang = p;
    }
    
    void setLebar(double l) {
        lebar = l;
    }
    
    void setTinggi(double t) {
        tinggi = t;
    }
    
    void HITUNGLUAS_ALAS() {
        LUAS_ALAS = panjang * lebar;
    }
    
    void HITUNGVOLUME() {
        VOLUME = panjang * lebar * tinggi;
    }
};

int main() {
    cout << "===== PROGRAM HITUNG LUAS ALAS DAN VOLUME =====" << endl;

    // Input Balok
    cout << "--- BALOK ---" << endl;
    Balok balok;
    double panjang, lebar, tinggi_balok;
    cout << "Masukkan panjang balok: ";
    cin >> panjang;
    cout << "Masukkan lebar balok: ";
    cin >> lebar;
    cout << "Masukkan tinggi balok: ";
    cin >> tinggi_balok;
    balok.setPanjang(panjang);
    balok.setLebar(lebar);
    balok.setTinggi(tinggi_balok);
    balok.HITUNGLUAS_ALAS();
    balok.HITUNGVOLUME();
    cout << "Luas Alas Balok: " << balok.getLuasAlas() << endl;
    cout << "Volume Balok: " << balok.getVolume() << endl;
    
    return 0;
}

