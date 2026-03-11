// Soal ini dijawab menggunakan bahasa CPP

/*
    Buatlah program yang menerima input satu bilangan bulat (detik) 
    dan menampilkan output dalam format: X detik = H jam M menit S detik
*/

#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    // totalDetik: menampung input awal dari pengguna
    // jam, menit, detik: menampung hasil perhitungan
    int totalDetik, jam, menit, detik;

    // 1. Meminta pengguna memasukkan input
    cout << "Masukkan jumlah detik: ";
    cin >> totalDetik;

    // 2. Logika Perhitungan Konversi Waktu
    
    // Menghitung JAM:
    // 1 Jam = 3600 Detik.
    // Kita bagi totalDetik dengan 3600. Karena tipe data int, hasilnya otomatis dibulatkan ke bawah.
    jam = totalDetik / 3600;

    // Menghitung SISA detik setelah diambil jam-nya:
    // Menggunakan operator MODULUS (%) untuk mendapatkan sisa pembagian.
    // Contoh: 7000 % 3600 = 3400
    int sisaSetelahJam = totalDetik % 3600;

    // Menghitung MENIT:
    // 1 Menit = 60 Detik.
    // Kita bagi sisa setelah jam tadi 60.
    menit = sisaSetelahJam / 60;

    // Menghitung DETIK akhir:
    // Ini adalah sisa dari pembagian menit tadi.
    detik = sisaSetelahJam % 60;

    // 3. Menampilkan Output sesuai format soal
    // Format: X detik = H jam M menit S detik
    cout << totalDetik << " detik = " 
        << jam << " jam " 
        << menit << " menit " 
        << detik << " detik" << endl;

    return 0;
}
