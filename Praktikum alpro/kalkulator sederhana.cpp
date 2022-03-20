//Nama : Latifa Riani Dewi
//NIM : 2100018075

#include <iostream>
using namespace std;

int main()
{
	int bil1, bil2;
	float hasil;
	char operasi;
	
	cout<<"PROGRAM KALKULATOR SEDERHANA"<<endl;
	cout<<"Masukan Bilangan pertama : ";
	cin>>bil1;
	cout<<"Masukan Bilangan kedua : ";
	cin>>bil2;	
	cout<<"Masukkan operator : ";
	cin>>operasi;
	
	switch (operasi){
	    case '+' : 
		hasil = bil1 + bil2;
		cout<<"Hasil dari "<<bil1<<" + "<<bil2<<" adalah "<<hasil;
		break;
		case '-' : 
		hasil = bil1 - bil2;
		cout<<"Hasil dari "<<bil1<<" - "<<bil2<<" adalah "<<hasil;
		break;
		case '*' : 
		hasil = bil1 * bil2;
		cout<<"Hasil dari "<<bil1<<" * "<<bil2<<" adalah "<<hasil;
		break;
		case '/' : 
		hasil = bil1 / bil2;
		cout<<"Hasil dari "<<bil1<<" / "<<bil2<<" adalah "<<hasil;
		break;
		default:
		cout<<"tidak ada"<<endl;
			
	}
	cin.get();
	return 0;
}
