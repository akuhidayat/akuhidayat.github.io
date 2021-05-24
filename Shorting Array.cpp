#include <iostream>
#include <conio.h>
using namespace std;

int jumlah, nilai, array_tmp;
int options;
char looping = 'y';
int counter = 0;

void shortingFunction(){
    cout << "- Array Data Shorting On C++ -\n";
    cout << "github.com/akuhidayat\n\n";
    cout << "Jumlah Bilangan : ";
    cin >> jumlah;
    cout << endl;
    
    int data[jumlah];
    for(int i = 0; i < jumlah; i++){
       cout << "Nilai Bilangan " << (i+1) << " : ";
       cin >> data[i];
    }
    
    cout << endl;
    cout << "Please Select This Option! \n";
    cout << "1. Shorting Terkecil (Descending)\n";
    cout << "2. Shorting Terbesar (Ascending)\n";
    cout << "select@option>> ";
    cin >> options;
    
    cout << endl << "Data Input : \n";
    for(int i = 0; i < jumlah; i++){
       printf ("%d ",data[i]);
    }
    
    cout << endl;
    if(options == 1){
      for(int i=0; i<jumlah; i++){
         for(nilai = i + 1; nilai < jumlah; nilai++){
            if(data[i] > data[nilai]){
              array_tmp = data[i];
              data[i] = data[nilai];
              data[nilai] = array_tmp;
            }
         }
      }
    
      cout << endl << "Hasil Shorting : \n";
      for(int i = 0; i < jumlah; i++){
         printf ("%d ",data[i]);
      }
    
    }else if(options == 2){
      for(int i=0; i<jumlah; i++){
         for(nilai = i + 1; nilai < jumlah; nilai++){
            if(data[i] < data[nilai]){
              array_tmp = data[i];
              data[i] = data[nilai];
              data[nilai] = array_tmp;
            }
         }
      }
    
      cout << endl << "Hasil Shorting : \n";
      for(int i = 0; i < jumlah; i++){
         printf ("%d ",data[i]);
      }
    
    }else{
       cout << "Opppsss... Something Wrong!";
    }
    
    getch();
}

main(){
    while(looping == 'y'){
       cout << string(50, '\n');
       shortingFunction();
       cout << endl << endl;
       cout << "Shorting Kembali? (y/n) : ";
       cin >> looping;
    }
}
