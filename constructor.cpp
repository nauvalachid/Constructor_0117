#include <iostream>
using namespace std;

class mahasiswa {
    public:
    mahasiswa(); // constructor mahasiswa
};

mahasiswa::mahasiswa(){
    cout << "Constructor Terpanggil" << endl; // definisi Constructor
};

int main(){
    mahasiswa mhs; // membuat objek mhs
    return 0;
}