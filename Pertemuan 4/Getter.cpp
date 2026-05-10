#include <iostream>
using namespace std;

class karyawan
{
    private:
        int umur;
        string jabatan;
        string nama;
    
    public:
    void SetUmur(int u)
    {
        umur = u;
    }
    int GetUmur()
    {
        return umur;
    }

    void SetJabatan(string j)
    {
        jabatan = j;
    }
    string GetJabatan()
    {
        return jabatan;
    }
    void SetNama(string n)
    {
        nama = n;
    }

    string GetNama()
    {
        return nama;
    }
};

int main()
{
    karyawan k1;
    k1.SetNama("Fadjar");
    k1.SetUmur(25);
    k1.SetJabatan("Manager");
    cout << "Nama Karyawan: " << k1.GetNama() << endl;
    cout << "Umur Karyawan: " << k1.GetUmur() << endl;
    cout << "Jabatan Karyawan: " << k1.GetJabatan() << endl;

    return 0;
}

// lebih singkat effisiean
// #include <iostream>
// using namespace std;

// class karyawan {
// 	private:
// 		string nama;
// 		int umur;
// 		string jabatan;
		
// 	public:
// 		void setData(string n, int u, string j) {
// 			nama = n;
// 			umur = u;
// 			jabatan = j;
// 		}
		
// 		string getNama() {
// 			return nama;
// 		}
		
// 		int getUmur() {
// 			return umur;
// 		}
		
// 		string getJabatan() {
// 			return jabatan;
// 		}
// };

// int main () {
// 	karyawan kar;
// 	kar.setData("wildan", 20, "CEO GOGGLE");
	
// 	cout << "Nama: " << kar.getNama() << endl;
// 	cout << "Umur: " << kar.getUmur() << " tahun" << endl;
// 	cout << "Jabatan: " << kar.getJabatan() << endl;
// }