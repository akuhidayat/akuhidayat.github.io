#include <iostream> 
using namespace std;
//Muhammad Hidayat | X RPL 2
int main(){
 string teman, tanyalagi;
 cout << "If, Else If, Elif On C++ | Hidayat" << endl;
 cout << "Apa Kamu Melihat Teman Saya? ";
 cin >> teman;
 
 if (teman == "ya"){
   cout << "\nKemana Perginya Dia? "; cin >> tanyalagi;
   if (tanyalagi == "kesana"){
     cout << "Baik, Aku Akan Mencarinya!" << endl;
   } else if (tanyalagi == "lupa"){
     cout << "Yatuhan, Harus Kemana Aku Mencarinya!" << endl;
   } else {
     cout << "Baiklah..." << endl;
   }  
 } else if (teman == "tidak"){
   cout << "\nOh, baik terimakasih!" << endl;
 } else {
   cout << "\nBaiklah! Sangat Sulit Bagiku Menemukannya!" << endl;
}
 return 0;
}
