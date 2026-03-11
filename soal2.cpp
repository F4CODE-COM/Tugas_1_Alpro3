// Soal ini dijawab menggunakan bahasa C, tapi tidak apa-apa jika menggunakan extension CPP
/*
Buat program yang membaca satu karakter menggunakan getchar(), getche(), dan getch(). 
Tampilkan karakter yang dimasukkan setelah setiap input.
*/

#include <stdio.h> // header/library untuk C
#include <conio.h> // Header khusus untuk getch() dan getche()

int main() {
    char karakter;

    printf("Test 1: getchar()\n");
    printf("Masukkan 1 karakter lalu tekan ENTER: ");
    
    // Logika getchar():
    // - Membaca karakter dari input user.
    // - Bersifat BLOCKING: Program akan menunggu user menekan ENTER dulu.
    // - Karakter baru diproses setelah tombol Enter ditekan.
    karakter = getchar(); 
    
    // Menampilkan hasil
    printf("Karakter yang dibaca: %c\n", karakter);
    
    // Membersihkan buffer input sisa newline (\n) dari tekan ENTER tadi
    // Agar tidak terbaca oleh fungsi berikutnya
    while (getchar() != '\n'); 

    printf("\n"); // Jarak antar test

    //2. MENGGUNAKAN getche()
    printf("Test 2: getche()\n");
    printf("Masukkan 1 karakter (Langsung muncul tanpa Enter di sebelah kanan): ");
    
    // Logika getche():
    // -Get Character Echo
    // - Membaca karakter langsung saat tombol ditekan (tanpa perlu Enter).
    // - ECHO: Karakter yang diketik OTOMATIS muncul/tampil di layar.
    karakter = getche(); 
    
    // Karena sudah muncul otomatis (echo), kita cuma perlu print newline biar rapi
    printf("\nKarakter yang dibaca: %c\n", karakter);
    printf("\n"); // Jarak antar test

    // 3. MENGGUNAKAN getch()
    printf("Test 3: getch()\n");
    printf("Masukkan 1 karakter (Tidak muncul di layar sebelah kanan): ");
    
    // Logika getch():
    // - Get Character No-Echo
    // - Membaca karakter langsung saat tombol ditekan (tanpa perlu Enter).
    // - NO-ECHO: Karakter yang diketik TIDAK muncul di layar (seperti input password).
    karakter = getch(); 
    
    // Karena tadi tidak muncul di layar, kita wajib menampilkannya manual sekarang
    printf("\nKarakter yang dibaca: %c\n", karakter);
    
    printf("\n");
    printf("Selesai!\n");
    return 0;
}
