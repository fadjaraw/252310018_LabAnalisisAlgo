#include <iostream>
using namespace std;


class Contoh {// Deklarasi class
private:
    int nilai; // atribut private (tidak bisa diakses langsung dari luar)

public:
   
    Contoh(int n) { // Constructor (memiliki parameter)
        nilai = n; // mengisi nilai saat objek dibuat
    }

   
    int getNum() { // Getter untuk mengambil nilai
        return nilai;
    }
};

int main() {
    Contoh obj(10);// Membuat objek dan langsung mengisi nilai melalui constructor

  
    cout << "nilai yang diinput: " << obj.getNum() << endl;  // Menampilkan nilai dari objek

    return 0;
}