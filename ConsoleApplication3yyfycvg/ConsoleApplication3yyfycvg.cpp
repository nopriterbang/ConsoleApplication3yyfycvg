// struktur 1

#include <iostreamusing>
using namespace std;

struct Mahasiswa{
    string nim;
    string nama;
    string alamat;
    string umur;
};

int main() {
    Mahasiswa mhs;
    cout << "Nomer mahasiswa: ";
    cin >> mhs.nim;
    cout << "Nama mahasiswa : ";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa : ";
    cin >> mhs.alamat;
    cout << "Umur mahasiwa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n Nama : " << mhs.nim;
    cout << "\n Nama : " << mhs.nama;
    cout << "\n Alamat : " << mhs.alamt;
    cout << "\n Umur : " << mhs.umur;
}
// project digabung karena vscode saya mengalami error mas 

//Struktur 2

// #include <iostream>
// using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct Mahasiswa{

};