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
    string nama[25];
    DetailAlamat alamat;
    int umur;
};

int main() {
    Mahasiswa mhs;
    cout << "Nomer Mhasiswa : ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa : ";
    getline(cin, mhs.nama);

    cout << "Alamat Mahasiswa : " << endl;
    cout << "\t Nama Desa : ";
    cin >> mhs.alamat.desa;
    cout << "\t Nama Kota : ";
    cin >> mhs.alamat.kota;
    cout << "Umur Mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n Nim :" << mhs.nim;
    
}

// struktur 4

#include <iostream>
using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};
 
struct Mahasiswa {
    string nim;
    string nama;
    DetailAlmaat alamat;
    int umur;

};

int main() {
    Mahasiswa mhs[3];
    {
    
     for (int i=0;i<3;i++)
     cout << "Nomer Mahasiswa"
     getline(cin, mhs[i].nim);
     cout << "Nama Mahasiswa : ";
     getline(cin, mhs[i].nama)

     cout << "Alamat mahasiswa : " << endl;
     cout << "\t Nama Desa : ";
     cin >> mhs[i].alamat.desa;
     cout << "\t Nama Kota : ";
     cin >> mhs[i].alamat.kota;
     cout << "Umur Mahasiswa : ";
     cin >> mhs[i].umur;
     cin.ignore(1, '\n');
     cout << endl;
    }
    for (int i=0:i<3;3,i++)
    cout << endl;
    cout << "Data mahasiswa ke-" << (i+1) <<":" << endl
    cout << "\n Nim" << mhs[i].nim;
    cout << "\n Nama" << mhs[i].nama;
    cout << "\n Alamat : ";
    cout << "\n \t Desa : " << mhs[i].alamat.desa;
    cout << "\n \t Kota :" << mhs[i].alamat.kota;
    cout << "\n Umur : " << mhs[i].umur;


}
