#include <iostream>
using namespace std;

int main (){
	float x, y, z, v;
	cout<<"Program menghitung volume balok"<<endl;
	cout<<"Masukan panjang balok : "<<endl;
	cin>>x;
	cout<<"Masukan lebar balok : "<<endl;
	cin>>y;
	cout<<"Masukan tinggi balok : "<<endl;
	cin>>z;
	v=x*y*z;
	cout<<"Volume balok adalah : "<<v<<endl;
	return 0;
}
