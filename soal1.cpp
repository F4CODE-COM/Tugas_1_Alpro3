// Soal ini dijawab menggunakan bahasa C, tapi tidak apa-apa jika menggunakan extension CPP
/* 
Buat program yang meminta pengguna memasukkan sebuah kata (terdiri dari minimal 10 karakter), 
lalu tampilkan karakter per karakter menggunakan putchar().
*/
#include <stdio.h>
//header stdio.h untuk bahasa C

int main (){
  char  kata[100];
  int n;
  printf("Masukkan sebuah kata yang terdiri dari minimal 10 karakter: ");
  scanf("%s%n",kata,&n);
  /* input akan disimpan dalam variabel kata dengan tipe data string(beberapa char dalam list/array) %n digunakan untuk membaca 
  berapa karakter yang dimasukkan user dan menyimpannya kedalam variabel n*/
  
  if (n>=10){
  // untuk memastikan input user minimal 10 karakter dengan membandingkan panjang karakter yang di input dengan angka 10
  for (int i=0;kata[i]!='\0';i++){
    /* pakai loop untuk menampilkan char per-char dengan  kondisi jika char ke-i = \0 (ini merupakan penanda akhir suatu string 
    yang terdapat dalam char[]), selama kata[i] tidak sama dengan '\0' maka i akan terus bertambah */ 
    putchar(kata[i]);
    printf("\n");
    // loop akan menampilkan string yang tersimpan menjadi char yang dipisah dengan newline
  }}

  else {printf("Input anda kurang dari 10 karakter, silahkan ulangi program...");}
  // jika input user <10 karakter maka program akan berhenti dan user diminta mengulang program
}
