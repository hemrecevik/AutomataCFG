#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Toplam_agac
{	
	int seviye;
	char deger[10];
	struct Toplam_agac *sonraki;
}ToplamAgac;
ToplamAgac *ilk=NULL,*son=NULL,*kutu;

typedef struct Elemanlar
{	
	int belirten;
	char deger[10];
	struct Elemanlar *sonraki;
}Elemans;
Elemans *ilk2=NULL,*son2=NULL,*kutu2;

ToplamAgac *BilgiAl(int seviye,char *eleman)
{		int i=0;
		kutu=(ToplamAgac*)malloc(sizeof(ToplamAgac));
 	 	kutu->seviye=seviye;
 	 	while(i<10){
 	 		kutu->deger[i]=eleman[i];
 	 		i++;
		  }
 	 	
 	 	kutu->sonraki=NULL;
 	 	return kutu;
}
Elemans *BilgiAl2(int seviye,char *eleman)
{		int i=0;
		kutu2=(Elemans*)malloc(sizeof(Elemans));
 	 	kutu2->belirten=seviye;
 	 	while(i<10){
 	 		kutu2->deger[i]=eleman[i];
 	 	
 	 		i++;
		  }
		 
 	 	kutu2->sonraki=NULL;
 	 	return kutu2;
}
void Ekle(ToplamAgac *eleman)
{
	if(ilk==NULL){
		ilk=eleman;
		son=eleman;
		son->sonraki=NULL;
	}
	else
	{
		son->sonraki=eleman;
		son=eleman;
		son->sonraki=NULL;
	}
	
}
void Ekle2(Elemans *eleman)
{
	if(ilk2==NULL){
		ilk2=eleman;
		son2=eleman;
		son2->sonraki=NULL;
	}
	else
	{
		son2->sonraki=eleman;
		son2=eleman;
		son2->sonraki=NULL;
	}
	
}
void Listele()
{
	ToplamAgac *gecici;
	gecici=ilk;
	while(gecici!=NULL){
		printf(" %d--%s\n",gecici->seviye,gecici->deger);
		gecici=gecici->sonraki;
	}
	printf("\n");
}
void Listele2()
{
	Elemans *gecici;
	gecici=ilk2;
	while(gecici!=NULL){
		printf("%d--%s \n",gecici->belirten,gecici->deger);
		gecici=gecici->sonraki;
	}
	printf("\n");
}
void Tekrarlanan_Kelimeler(){
		ToplamAgac *gecici;
		int i=0;
		gecici=ilk;
		while(i<7)
		{
			gecici=gecici->sonraki;
			i++;
		}
		
		while(gecici!=NULL){
			printf("%s\n",gecici->deger);
			if(gecici==son)break;
			gecici=gecici->sonraki;
		}
	
}
void ToplamAgacOlustur(){
		ToplamAgac *Bilgi,*gecici;
		Elemans *Bilgi2,*gecici2;
		char dizi[10];
		int i=0,k=0,j,h,k1=0,sayac=0,sev=2;
		gecici=ilk;
		gecici2=ilk2;
		
		while(1){
			if(gecici->deger[i]!=gecici2->deger[0]){
				gecici2=gecici2->sonraki;
				while(gecici2->belirten!=1 && gecici2!=NULL)
				{	if(gecici2==son2){
					gecici2=gecici2->sonraki;
					break;
				}
					gecici2=gecici2->sonraki;
					if(gecici2->belirten==1&&gecici->deger[i]!=gecici2->deger[0])gecici2=gecici2->sonraki;
				}
				
			}
				
			if(gecici2!=NULL&&gecici->deger[i]==gecici2->deger[0]){
				
				gecici2=gecici2->sonraki;
				while(gecici2->belirten==0 &&gecici2!=NULL){
					while(k<10){
					dizi[k]=gecici->deger[k];
					k++;
				}
			
				j=strlen(gecici2->deger)-1;//j = X den gelicek olan harflerin uzunluðu
				h=strlen(dizi)-1;//h = CFG deki deðerin uzunluðu
				
				while(h!=i){
				dizi[h+j]=dizi[h];
				h--;
				}
				
				sayac=i;
				
				while(k1<=j)
				{
					dizi[sayac]=gecici2->deger[k1];
					sayac++;
					k1++;
				
				}
				
				Bilgi=BilgiAl(sev,dizi);
				Ekle(Bilgi);
				if(gecici2==son2)break;
				gecici2=gecici2->sonraki;
				k=0;
				k1=0;
				
			}
			sev++;
			i=10;
			
			}//ÝF ÝN PARANTEZÝ
			
			if(gecici->deger[i]==0){
				gecici=gecici->sonraki;
				i=0;
			}
			else i++;
			if(i==10){
				i=0;
				gecici=gecici->sonraki;
			}
			
			gecici2=ilk2;
			if(gecici==NULL)break;
			k=0;
			k1=0;
		}
}

void baskasecim() {
    char temp;
    printf("Baska bir secim yapmak icin Enter'a basiniz!\n");
    temp = getchar();
    temp = getchar();
    system("cls");
}
void Kelimeler(){
	ToplamAgac *gecici;
	Elemans *gecici2;
	gecici2=ilk2;
	gecici=ilk;
	int boyut,i=0,sayac=0;
	while(gecici!=NULL){
		boyut=strlen(gecici->deger);
		
		while(i<boyut){
				if(gecici->deger[i]==gecici2->deger[0]){
					sayac++;
					break;
				}
				else {
				gecici2=gecici2->sonraki;
				while(gecici2->belirten!=1){
						gecici2=gecici2->sonraki;
					if(gecici2==son2){
						gecici2=gecici2->sonraki;
						break;
					}
					if(gecici2->belirten==1&&gecici->deger[i]!=gecici2->deger[0])gecici2=gecici2->sonraki;
					if(gecici2->belirten==1&&gecici->deger[i]==gecici2->deger[0]){
						sayac++;
						break;
					}
				}
				if(sayac>0)break;
				
				}
				gecici2=ilk2;
				i++;
			
		}
 		if(sayac==0)
		printf(" %s \n",gecici->deger);
		gecici2=ilk2;
		if(gecici==son)break;
		gecici=gecici->sonraki;
		i=0;
		sayac=0;
	}	
	printf("\n");
}
main(){
	FILE *fp1;
	ToplamAgac *Bilgi,*gecici;
	Elemans *Bilgi2,*gecici_2;
	int sayac=0,i=0,sayac2=0,k=0,sayac3=0,sayac4=0,j=0,eleman_sayisi=0,q=0,seviye=1,belirt=0;
	char CFG[50]={0},CFG2[50]={0},Elemanlar[10]={0},alfabe[10]={0},gecici1,gecici2,gecici3,alinan;
	char YeniCFG[10][10]={0},YeniCFG2[10][10]={0};
	
		if ((fp1 = fopen ("CFG.txt", "r")) == NULL) {
      printf("Dosya acma hatasi!");
      exit(1);
  }
  for(int p1=0;p1<10;p1++){
  	for(int p2=0;p2<10;p2++){
  		YeniCFG[p1][p2]=0;
	  }
  }
  for(int t1=0;t1<10;t1++){
  	for(int t2=0;t2<10;t2++){
  		YeniCFG2[t1][t2]=0;
	  }
  }
  //ALFABEYÝ BULMAK ÝÇÝN
  while(1){
  	gecici3=getc(fp1);
  	if(gecici3=='{'){
  		
  	while(gecici3!='}'){
  		gecici3=getc(fp1);
  		if(gecici3=='}')break;
  		if(gecici3!=','){
  			alfabe[q]=gecici3;
  			q++;
		  }
	  }
	  break;
}
  }
  //S YÝ ALMAK ÝÇÝN KULLANILAN DÖNGÜ
while(!feof(fp1)){
	gecici1=getc(fp1);
	if(gecici1==','){
		sayac++;
		break;
	}
 	CFG[i]=gecici1;
	i++;	
}
//GERÝ KALANI ALMAK ÝÇÝN KULLANILAN YER

if(sayac!=0)
{	
	while(!feof(fp1)){
	gecici2=getc(fp1);

	if(feof(fp1))break;
	
	if(sayac2==0){
		Elemanlar[k]=gecici2;
		k++;
		sayac2++;
		eleman_sayisi++;
	}
	if(sayac3!=0){
		Elemanlar[k]=gecici2;
		k++;
		sayac3=0;
		eleman_sayisi++;
	}
	if(gecici2==',')sayac3++;
	CFG2[j]=gecici2;
	j++;
	
}

}

//CFG YÝ PARÇALARA BÖLME
int e=5,e2=0,e3=0,e6=0,say1=0;
while(CFG[e]!=0){

	while(CFG[e]!='|'&& CFG[e]!=0){
		YeniCFG[e2][e3]=CFG[e];
			
		e3++;
		e++;
	}
	
	e2++;
	e3=0;
	e++;
}

while(YeniCFG[e6][0]!=0){
	Bilgi=BilgiAl(seviye,YeniCFG[e6]);
	Ekle(Bilgi);
	e6++;
}

int r=0,r2=0,r3=0,r6=0,sayac5=0;
while(CFG2[r]!=0&& r<50)
{	
	if(CFG2[r]!='-'&&CFG2[r]!='>'&&CFG2[r]!=','&&sayac4==0&& r<50)
	{
		YeniCFG2[r2][r3]=CFG2[r];
		r3++;
		YeniCFG2[r2][r3]='-';
		Bilgi2=BilgiAl2(1,YeniCFG2[r2]);
		Ekle2(Bilgi2);
		r++;
		r2++;
	r3=0;
	sayac4++;
	}
	
	while(CFG2[r]!='|'&& CFG2[r]!=0 &&CFG2[r]!='-'&&CFG2[r]!='>'&&CFG2[r]!=','&&CFG2[r]!=0&& r<50){
		YeniCFG2[r2][r3]=CFG2[r];
		r3++;
		r++;
		sayac4++;
		sayac5=0;
	}
	
	if(CFG2[r]=='|'||CFG2[r]==0||CFG2[r]==',' && r<50){
		Bilgi2=BilgiAl2(0,YeniCFG2[r2]);
		Ekle2(Bilgi2);
	}
	
	
	if(CFG2[r]==','&& r<50)sayac4=0;
	if(CFG2[r]=='|')r2++;
	r++;
	r3=0;
} 
gecici=ilk;
gecici_2=ilk2;

ToplamAgacOlustur();



while(1){

printf("Hangi islemi yapmak istediginizi seciniz...\n");
printf(" C-CFG YI GOSTER \n A-BUTUN AGACI GOSTER \n K-SADECE TURETILEN KELIMELERI GOSTER \n T-TEKRAR EDEN KELIMELERI GOSTER\n E-CIKIS \n");
printf(" -->");
scanf("%c",&alinan);
switch(alinan){
	case 'C':printf("CFG = %s %s \n",CFG,CFG2);baskasecim();break;
	case 'A':Listele();baskasecim();break;
	case 'K':printf("\n%s %s icin Uretilen Kelimeler sunlardir: \n",CFG,CFG2);Kelimeler();baskasecim();break;
	case 'T':printf("Tekrar Eden Kelimeler Sunlardir :\n");Tekrarlanan_Kelimeler();baskasecim();break;
	case 'E':exit(1);break;
	default:
			printf("HATA: Bilinmeyen bir deger girdiniz! %c \n",alinan);
	
	
}
}

}
