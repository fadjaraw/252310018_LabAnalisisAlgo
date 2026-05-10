#include <iostream>
using namespace std;

class komputer
{
    private:
        string Model;
        string Brand;
        int Ram;
        double price;

    
    public:
    void SetModel(string j)
    {
        Model = j;
    }

    string GetModel()
    {
        return Model;
    }

    void SetBrand(string n)
    {
        Brand = n;
    }

    string GetBrand()
    {
        return Brand;
    }
    
    void SetRam(int o)
    {
        Ram = o;
    }

    int GetRam()
    {
        return Ram;
    }

    void setPrice(double pr) {
        if (pr > 0) {
            price = pr;
        } else {
            cout << "Harga harus lebih dari 0" << endl;
        }
    }

    double PerhitunganHarga() {
        double Harga = (Ram * 10) + (price / 100);
        return Harga;
    }

int main()
{
    komputer Computer;

    string Brand, Model;
    int Ram;
    double harga;

    cout << "Masukkan brand komputer: ";
    getline(cin, Brand);
    Computer.SetBrand(Brand);

    cout << "Masukkan model komputer: ";
    getline(cin, Model);
    Computer.SetModel(Model);

    cout << "Masukkan RAM komputer (dalam GB): ";
    cin >> Ram;
    Computer.SetRam(Ram);

    cout << "Masukkan harga komputer: ";
    cin >> harga;
    Computer.setPrice(harga);

    cout << "Harga komputer: " << Computer.PerhitunganHarga() << endl;

    cout << "\n==== OUTPUT DATA KOMPUTER ====" << endl;
    cout << "Brand: " << Computer.GetBrand() << endl;
    cout << "Model: " << Computer.GetModel() << endl;
    cout << "RAM: " << Computer.GetRam() << " GB" << endl;
    cout << "Harga: Rp " << Computer.PerhitunganHarga() << endl;


    return 0;
}

};