#include <iostream>
using namespace std;

class Hewan
{
    public:
        void bersuara()
        {
            cout << "Hewan bersuara" << endl;
        }
};

class Bebek : public Hewan
{
    public:
        void bersuara()
        {
            cout << "Kwek kwek" << endl;
        }
};

int main()
{  
    Bebek bebek1;
    Bebek *bebek2 = new Bebek();
    bebek1.bersuara();
    bebek2->bersuara();


    delete bebek2;

    return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;

// class Computer {
// private:
//     string brand;
//     string processor;
//     int ramGB;
//     double price;

// public:
//     // Setter methods
//     void setBrand(string b) {
//         brand = b;
//     }

//     void setProcessor(string p) {
//         processor = p;
//     }

//     void setRamGB(int r) {
//         if (r > 0) {
//             ramGB = r;
//         } else {
//             cout << "RAM harus lebih dari 0 GB!" << endl;
//         }
//     }

//     void setPrice(double pr) {
//         if (pr > 0) {
//             price = pr;
//         } else {
//             cout << "Harga harus lebih dari 0!" << endl;
//         }
//     }

//     // Getter methods
//     string getBrand() {
//         return brand;
//     }

//     string getProcessor() {
//         return processor;
//     }

//     int getRamGB() {
//         return ramGB;
//     }

//     double getPrice() {
//         return price;
//     }

//     // Method yang melibatkan atribut
//     double calculatePerformanceScore() {
//         double score = (ramGB * 10) + (price / 100);
//         return score;
//     }

//     // Method untuk menampilkan spesifikasi
//     void displaySpecification() {
//         cout << "\n===== SPESIFIKASI KOMPUTER =====" << endl;
//         cout << "Brand: " << brand << endl;
//         cout << "Processor: " << processor << endl;
//         cout << "RAM: " << ramGB << " GB" << endl;
//         cout << "Harga: Rp " << price << endl;
//         cout << "Performance Score: " << calculatePerformanceScore() << endl;
//         cout << "================================\n" << endl;
//     }
// };

// int main() {
//     Computer myComputer;

//     // Input data menggunakan setter
//     cout << "==== INPUT DATA KOMPUTER ====" << endl;
    
//     string brand, processor;
//     int ram;
//     double harga;

//     cout << "Masukkan brand komputer: ";
//     getline(cin, brand);
//     myComputer.setBrand(brand);

//     cout << "Masukkan processor: ";
//     getline(cin, processor);
//     myComputer.setProcessor(processor);

//     cout << "Masukkan RAM (GB): ";
//     cin >> ram;
//     myComputer.setRamGB(ram);

//     cout << "Masukkan harga: ";
//     cin >> harga;
//     myComputer.setPrice(harga);

//     // Output data menggunakan getter
//     cout << "\n==== OUTPUT DATA KOMPUTER ====" << endl;
//     cout << "Brand: " << myComputer.getBrand() << endl;
//     cout << "Processor: " << myComputer.getProcessor() << endl;
//     cout << "RAM: " << myComputer.getRamGB() << " GB" << endl;
//     cout << "Harga: Rp " << myComputer.getPrice() << endl;

//     // Menampilkan hasil method
//     cout << "\nPerformance Score: " << myComputer.calculatePerformanceScore() << endl;
//     myComputer.displaySpecification();

//     return 0;
// }