#include <iostream>
#include <string>

using namespace std;

// Gaji pokok
int pokok(int jamKerja) {
    int gajiPokokPerJam = 7500; // Gaji pokok perjam
    return gajiPokokPerJam * jamKerja; // Menghitung gaji pokok
}

// Lembur
//int lembur(int jamKerja) {
   // double tarifLembur = 1.5; // Tarif lembur 1.5 dikarenakan perjam = 7500 maka 1.5*7500=11250
   // int jamLembur = 0;  //
   // if (jamKerja > 8) {
   //     jamLembur = (jamKerja - 8) * (7500 * tarifLembur); // Menghitung lembur
    //}
    //return jamLembur; // Mengembalikan total lembur
//}

//cara lain menghitung lembur tanpa menggunakan tipe data double/float
int lembur(int jamKerja) {
    int tarifLembur = 7500;//kenapa disini input 7500 bkan 1.5 dikarenakan tipe data int tidak bisa menerima 1.5 yg ada malah dibulatkan menjadi 1 jaadi bakal error
    if (jamKerja > 8) { //jadi kita harus input 7500 dlu
        int jamLembur = jamKerja - 8; //bila lebih dari 8 maka bakal dihitung sebagai totalLembur
        return jamLembur * (tarifLembur * 1.5); //misal 10jam=10-2|maka  2 * (7500 * 1.5) = 2 * 11250 = 22500.
    }
    return 0;
}

// uang makan
int makan(int jamKerja) {
    int uangMakan = 10000;
    if (jamKerja >= 9) {
        return uangMakan;
    }
    return 0;
}

//  transport
int transport(int jamKerja) {
    int uangTransport = 13000;
    if (jamKerja >= 10) {
        return uangTransport;
    }
    return 0;
}


int main() {
    string nip, nama;
    int jamKerja;


    cout << "Masukkan NIP: ";
    cin >> nip;
    cin.ignore();
    cout << "Masukkan Nama : ";
    getline(cin, nama);
    //cin >> nama; tidak dipakai karna sudah ada getline
    cout << "Masukkan Jumlah Jam Kerja: ";
    cin >> jamKerja;


    int gajiPokok = pokok(jamKerja);
    int gajiLembur = lembur(jamKerja);
    int gajiMakan = makan(jamKerja);
    int gajiTransport = transport(jamKerja);


    cout << "\*************Rincian Gaji Karyawan*************\n";
    cout << "NIP: " << nip << endl;
    cout << "Nama: " << nama << endl;
    cout << "Gaji Pokok: Rp. " << gajiPokok << endl;
    cout << "Lembur: Rp. " << gajiLembur << endl;
    cout << "Uang Makan: Rp. " << gajiMakan << endl;
    cout << "Transport: Rp. " << gajiTransport << endl;
    cout << "Total Gaji: Rp. " << (gajiPokok + gajiLembur) << endl;

    return 0;
}
