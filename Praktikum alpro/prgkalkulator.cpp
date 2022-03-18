// Program Kalkulator sederhana 
// Anggota kelompok : 1) Latifa Riani Dewi  (2100018075/B) 
//					  2) Zaidi Mufthisor    (2100018105/B) 
//					  3) Pinasti Robi Aulia (2100018118/B) 

#include<iostream>
using namespace std;

int main(){
	float bil1, bil2, hasil;
	char operasi;
	
	cout<<"PROGRAM KALKULATOR"<<endl;
	cout<<"Bilangan pertama = ";
	cin>>bil1;
	cout<<"Bilangan kedua = ";
	cin>>bil2;
	
	cout<<"Operator = ";
	cin>>operasi;
	
	//penjumlahan
	if (operasi == '+'){
		hasil = bil1 + bil2;
	}
	//pengurangan
	else if (operasi == '-'){
		hasil = bil1 - bil2;
	}
	//perkalian 
	else if (operasi == 'x'){
		hasil = bil1 * bil2;
	}
	//pembagian
	else if (operasi == '/'){
		hasil = bil1 / bil2;
	}
	
	cout<<"\n";
	cout<<"Hasil = "<<hasil<<endl;
	return 0;
}
