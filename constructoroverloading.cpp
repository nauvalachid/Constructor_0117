#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private:
    int nim;
    string nama;
    public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNim, string iNama);
    void cetak();
};

mahasiswa::mahasiswa(){
}

mahasiswa::mahasiswa(int iNim){
    nim = iNim; // definisi hanya nim
}

mahasiswa::mahasiswa(string iNama){
    nama = iNama; // definisi hanya nama
}

// definisi nim dan nama
mahasiswa::mahasiswa(int iNim,string iNama){
    nama = iNama;
    nim = iNim;
}

void mahasiswa::cetak(){
    cout << "NIM : " << nim <<endl;
    cout << "Nama : " << nama <<endl;
}

int main(){
    mahasiswa mhs1(22222); //hanya NIM
    mahasiswa mhs2("Pascal"); //hanya nama
    mahasiswa mhs3(22222,"Pascal"); //NIM dan nama

    // Tampilkan nilai
    cout << "Mahasiswa 1:"; mhs1.cetak();
    cout << "Mahasiswa 2:"; mhs2.cetak();
    cout << "Mahasiswa 3:"; mhs3.cetak();

    return 0;
}