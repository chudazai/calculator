#include <iostream>
using namespace std;
int main()
{
 
	int sayi_1,sayi_2,sonuc;
	char islem;
	cout<<"islem giriniz:"<<endl;
	cin>>sayi_1>>islem>>sayi_2;
	if(islem=='+')
	sonuc=sayi_1+sayi_2;
	else if(islem=='-')
	sonuc=sayi_1-sayi_2;
	else if(islem=='*')
	sonuc=sayi_1*sayi_2;
	else if(islem=='%')
    	sonuc=sayi_1%sayi_2;
	else if(islem=='/')
	sonuc=sayi_1/sayi_2;
	{
		if (sayi_2==0)
		{
			cout<<"Bolum sifir olamaz";
			return 0;
		}
		
		sonuc=sayi_1/sayi_2;	
	}

 
	{
		cout<<"yanlýs islem girdiniz";
		retrun 0;
	}
	cout<<"sonuc;"<<endl;
	cout<<sayi_1<<""<<islem<<sayi_2<<"="<<
	sonuc;
	
	retrun 0;
}


