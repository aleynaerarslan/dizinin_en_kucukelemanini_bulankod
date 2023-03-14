#include <stdio.h>
#include <stdlib.h>
//Aleyna Erarslan 1220505045
//dizimizde en kucuk elemman� bulan fonksiyonu tan�mlayarak program�n toplam T(n) hesab�n� yap�yoruz.
int enkucuk(int dizi[],int n){ 
	int i;
	int gecici=dizi[0]; //1 kez �al��acak �ekilde bir atama yap�lm��t�r.
	 // n dizideki eleman say�s�d�r.
	for(i=0;i<n;i++){   // i=0 atamas�->1 kez yap�l�r. i<n kontrolu->n+1 son kez de i �arta uymasa bile bir kontrol yap�l�r kez yap�l�r.   i++ i�lemi->n kez yap�l�r.   
		if(dizi[i]<gecici){  // d�ng� �evrim say�s� kadar y�r�t�l�r i�lem say�s�->n-1
			gecici=dizi[i];  //n-1 kez tekrar etmekte.��nk� en k�t� ihtimale g�re dizi[i]=gecici biribirine 1 kez e�it olacak ve en az 1 kez if blo�unun i�ine girilmeyecek
		} 
	}
	return gecici; //1 kez
}
//fonksiyon i�in T(n) = 4n+2 olur. �n�ndeki katsay� ve yan�ndaki toplam�n pek de bir �nemi yoktur.��nk� sonu� olarak n lineer oldu�unu g�sterir. bigO'su O(n)'dir.
int main(int argc, char *argv[]) {
	int n;  //n dizinin eleman say�s�d�r.
	int i;
	printf("diziniz kac elemanli olsun giriniz:"); 
	scanf("%d",&n); //kullan�c�dan dizinin eleman say�s� al�nacakt�r.
	
	int dizi[n];  //dizi ka� elemanl� ise ona g�re d�ng�m�z ba�layacak.
	for(i=0;i<n;i++){ // 1.si 1 kez,2.i�lem n+1 kez,3.i�lem ise n kez yap�lacak.
		printf("%d. elemani giriniz:",i+1); // kullan�c� ka� eleman istiyorsa o say� kadar d�necek.
		scanf("%d",&dizi[i]); // say� giri�i olacak.
	}
	
	printf("dizinin en kucuk elemani= %d",enkucuk(dizi,n));  // d�ng�de tespit edilen en k���k sayi ekrana bas�lacak.
	return 0; //1 kez i�lem yap�l�r.
}

//proram�n toplam T(n) hesab� yapp�ld���nda ise 6n+5 yapar bunda da yan�ndaki rakamlar�n �ok da bir �nemi yoktur n olmas�ndan �t�r� lineerdir.
