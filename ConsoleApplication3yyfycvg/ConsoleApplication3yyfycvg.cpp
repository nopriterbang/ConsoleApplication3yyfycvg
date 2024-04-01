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

#include <iostream>
using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct Mahasiswa{
    string nim;
    string nama;
    string alamat;
    int umur
};

int main() {
    Mahasiswa mhs;
    cout << "Nomer mahasiswa: ";
    cin >> mhs.nim;
    cout << "Nama mahasiswa : ";
    cin >> mhs.nama;

    cout << "Alamat Mahasiswa : " << endl;
    cout << "\t Nama Desa : ";
    cin >> mhs.alamat.desa;
    cout << "\t Nama Kota : ";
    cin >> mhs.alamat.kota;

    cout << "Umur mahasiwa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n Nama : " << mhs.nim;
    cout << "\n Nama : " << mhs.nama;
    cout << "\n Alamat : " << mhs.alamt;
    cout << "\n \t Desa : " << mhs.alamat.desa;
    cout << "\n \t Kota" << mhs.alamat.kota;
    cout << "\n Umur : " << mhs.umur;
}
// struktur 3

#include <iostream>
using namespace std

struct Mahasiswa {
    string nim;
    char nama[25];
    DetailAlamat alamat;
    int umur;
};

int main() {
    Mahasiswa mhs;
    cout << "Nomer Mhasiswa : ";
    cin >> mhs.nim;
    cout 
}