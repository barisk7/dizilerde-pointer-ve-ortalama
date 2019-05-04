#include <stdio.h>
#include <stdlib.h>
#include <iostream>

 int pointer (int dizi [], int n ) { // n degeri dizinin eleman sayisidir.
 
 	int w;
 	int *p1;
 	printf("Yeni dizi olusturuluyor\n\n");
 	printf("Yeni dizinin elemanlari :");
	for(w=0;w<n;w++) {
		p1=&dizi[w];
		dizi[w]+=1;
		if (w!=n-1)
		printf("%d,",dizi[w]);
		else {
		printf("%d",dizi[w]);
		 }
		
	}
	
	printf("\n\n");
	for(w=0;w<n;w++){
		p1=&dizi[w];
	
	printf("%d sayisinin adresi %p \n",*p1,p1);

}
	}
 
 float ort(int dizi[],int n) {
 	int w;
 	float toplam = 0;
 	for(int w = 0; w < n; w++) 
	 {	
	 	toplam = toplam + dizi[w];
	 	
	 }
	 toplam = toplam / n;
 	return toplam;
 
 		
	 } 
 
int main () {
	int x;
		
	int i;

		printf ("Dizinin eleman sayisini giriniz:");
		scanf  ("%d",&x);
		int dizi[x];
		
		printf ("\n");
		printf ("Dizinin  elemanlarini giriniz\n");

	for	(i=0;i<x;i++){
	
		scanf  ("%d",&dizi[i]);
		
		
		}
		
		printf("\n\nGirdiginiz elemanlar ve pointer adresleri:\n\n");
	
	for (i=0;i<x;i++) {
		int *pdizi[i];
		pdizi[i]=&dizi[i];
		
			printf("%d sayisinin adresi %p dir\n\n",dizi[i],pdizi[i]);
		
	}
	
		printf("\n\n");
		
		pointer(dizi,x);
		printf("Olusturulan yeni dizinin ortalamasi:%.2f",ort(dizi,x));
		
		
	return 0;
}
		


	
