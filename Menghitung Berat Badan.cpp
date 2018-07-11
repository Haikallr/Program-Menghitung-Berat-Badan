#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int berat;
	
	cout<<"PROGRAM TIMBANG BERAT BADAN ANDA \n"<<endl<<endl;
	cout<<"Masukan Berat Anda : ";
	cin>>berat;
	
	if(berat<35)
	cout<<"Maaf Anda Terlalu Kurus, Silahkan Makan Yang Banyak."<<endl;
	else
	cout<<"Maaf Anda Terlalu Gendutttt, DIET WOY DIET!!!"<<endl;
	
getch();
}
