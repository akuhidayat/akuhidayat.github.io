#include <iostream> 
using namespace std;
//Muhammad Hidayat | X RPL 2

int main(){
 int umur;
 string nama;
 cout << "[*] Selamat Datang Di YAT Cinema21 [*]\n\n" << endl;
 cout << "Nama : ";
 cin >> nama;
 cout << "Umur : ";
 cin >> umur;
 cout << "Selamat Datang " << nama;

 if (umur >= 17){
   cout << ", Kamu Di Perbolehkan Masuk!" << endl;
 } else {
   cout << ". Tapi Maaf, Kamu Dilarang Masuk!" << endl;
 }

 return 0;
}
