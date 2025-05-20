#include <iostream>
#include <string>
using namespace std;

class Barang {
  private:
    int kodeBarang;
    string namaBarang;

  public:
    Barang(int kode, string nama) {
        kodeBarang = kode;
        namaBarang = nama;
    }

    void cetak() {
        cout << "Data Barang:" << endl;
        cout << "Nama Barang : " << namaBarang << endl;
        cout << "Kode Barang : " << kodeBarang << endl;
    }
};

int main() {
    Barang br(117, "Nauval");
    br.cetak(); 
    return 0;
}
