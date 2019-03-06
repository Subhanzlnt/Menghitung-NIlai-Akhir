#include <iostream>
#include <conio.h>

using namespace std;
 
struct nilai{
    int tugas, kuis, uts, uas ;
    char nama [15];
    float hasil;
}na; 
 
int main(){
	
 	cout << "Nama mahasiswa : ";
 	cin >> na.nama;
 	cout << "Nilai Tugas : ";
 	cin >> na.tugas ;
 	cout << "Nilai Kuis : ";
 	cin >> na.kuis ;
 	cout << "nilai uts : ";
 	cin >> na.uts;
 	cout << "nilai uas : ";
 	cin >> na.uas;
 	
 	na.hasil = na.tugas*0.1 + na.kuis*0.2 + na.uts*0.3 + na.uas*0.4 ;	
 	
 	cout << "------------------" << endl;
	 cout << "Nama Mahasiswa : " << na.nama << endl ;
    cout << "Nilai akhir : " << na.hasil <<" , ";
 	
 	if(na.hasil > 85 )
	 {
	   cout << "A";
	 }
 	else if ((85 >= na.hasil)&&(na.hasil > 70 ))
 	{
		cout << "B";
    }		 
 	else if ((69 >= na.hasil)&&(na.hasil > 55 ))
	 {
	 	cout << "C";
	 }
 	else if ((54 >= na.hasil)&&(na.hasil > 40 ))
	 {
	 cout << "D";
	 }
 	else if ((39 >= na.hasil)&&(na.hasil >0 ))
	 {
	 cout << "E";
	 }
     
    return 0;
}