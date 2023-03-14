#include <stdio.h>
#include <stdlib.h>
//Aleyna Erarslan 1220505045
//dizimizde en kucuk elemmaný bulan fonksiyonu tanýmlayarak programýn toplam T(n) hesabýný yapýyoruz.
int enkucuk(int dizi[],int n){ 
	int i;
	int gecici=dizi[0]; //1 kez çalýþacak þekilde bir atama yapýlmýþtýr.
	 // n dizideki eleman sayýsýdýr.
	for(i=0;i<n;i++){   // i=0 atamasý->1 kez yapýlýr. i<n kontrolu->n+1 son kez de i þarta uymasa bile bir kontrol yapýlýr kez yapýlýr.   i++ iþlemi->n kez yapýlýr.   
		if(dizi[i]<gecici){  // döngü çevrim sayýsý kadar yürütülür iþlem sayýsý->n-1
			gecici=dizi[i];  //n-1 kez tekrar etmekte.çünkü en kötü ihtimale göre dizi[i]=gecici biribirine 1 kez eþit olacak ve en az 1 kez if bloðunun içine girilmeyecek
		} 
	}
	return gecici; //1 kez
}
//fonksiyon için T(n) = 4n+2 olur. önündeki katsayý ve yanýndaki toplamýn pek de bir önemi yoktur.Çünkü sonuç olarak n lineer olduðunu gösterir. bigO'su O(n)'dir.
int main(int argc, char *argv[]) {
	int n;  //n dizinin eleman sayýsýdýr.
	int i;
	printf("diziniz kac elemanli olsun giriniz:"); 
	scanf("%d",&n); //kullanýcýdan dizinin eleman sayýsý alýnacaktýr.
	
	int dizi[n];  //dizi kaç elemanlý ise ona göre döngümüz baþlayacak.
	for(i=0;i<n;i++){ // 1.si 1 kez,2.iþlem n+1 kez,3.iþlem ise n kez yapýlacak.
		printf("%d. elemani giriniz:",i+1); // kullanýcý kaç eleman istiyorsa o sayý kadar dönecek.
		scanf("%d",&dizi[i]); // sayý giriþi olacak.
	}
	
	printf("dizinin en kucuk elemani= %d",enkucuk(dizi,n));  // döngüde tespit edilen en küçük sayi ekrana basýlacak.
	return 0; //1 kez iþlem yapýlýr.
}

//proramýn toplam T(n) hesabý yappýldýðýnda ise 6n+5 yapar bunda da yanýndaki rakamlarýn çok da bir önemi yoktur n olmasýndan ötürü lineerdir.
