#include <stdio.h>
//Kelompok 1 | X RPL 2
//Akmal - Aqilah - Ardian - Ajhi - Hidayat - Zahra

int main(){
	int saldo,bunga,bunga_nonpersen,administrasi,total;
	printf("Penghitung Saldo Bulanan Mu.\n\n");
 printf("\n-------------------\n");
 printf("[ ! ] Bunga Dalam Persen (contoh : 40)\n");
	printf("Bunga \t\t\t: ");
	scanf("%d",&bunga);
	printf("Saldo Awal \t\t: ");
	scanf("%d",&saldo);
 printf("Biaya Administrasi \t: ");
	scanf("%d",&administrasi);
 printf("\n------------\n");
 bunga_nonpersen = saldo*bunga/100;
	total = saldo + bunga_nonpersen - administrasi;
 printf("\nBunga \t\t\t: Rp. %d", bunga_nonpersen);
	printf("\nTabungan Mu \t\t: Rp. %d",total);
 printf("\n-------------------\n");
	return 0;
}