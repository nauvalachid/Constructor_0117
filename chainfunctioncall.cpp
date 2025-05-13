#include <iostream>
using namespace std;

class buku{
    string judul;
    public:
    buku setJudul(string Judul){
        this->judul = judul;
        return *this; // chain function
    }
    string getJudul(){
        return this->judul;
    }
};

int main (){
    buku bk;
    // chain function calls
    cout << bk.setJudul("Matematika").getJudul();
    return 0;
};