#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
  public:
    //  Constructor dengan parameter
     mahasiswa(int nim, string nama);   
};

// Definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama) {
    cout << "Constructor dengan parameter terpanggil" << endl;
    cout << "NIM :" << nim << endl;
    cout << "Nama :" << nama << endl;
};

// Memanggil constructor dengan parameter
int main() {
    mahasiswa mhs(12345, "Pascal");
    return 0;
};