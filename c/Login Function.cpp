#include <iostream> 
using namespace std;
//Muhammad Hidayat | X RPL 2
int main(){
 string password;
 cout << "Login System On C++ | Hidayat" << endl;
 cout << "Masukan Pasword : ";
 cin >> password;
 
 if (password == "Password"){
   cout << "Selamat Datang!" << endl;
 } else {
   cout << "Password salah, coba lagi!" << endl;
}
 cout << " [*] Terimakasih Telah Menggunakan Sistem Ini!" << endl; 
 return 0;
}
