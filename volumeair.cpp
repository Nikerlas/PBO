#include <iostream>
using namespace std;

int main (){
	float p, l, t, r, ti, total, vb, vt;
	float phi = 3.14;
	
	cout<<"Program menghitung volume air"<<endl;
	cout<<"Masukan panjang balok : "<<endl;
	cin>>p;
	cout<<"Masukan lebar balok : "<<endl;
	cin>>l;
	cout<<"Masukan tinggi balok : "<<endl;
	cin>>t;
	cout<<"Masukan jari jari tabung : "<<endl;
	cin>>r;
	cout<<"Masukan tinggi tabung : "<<endl;
	cin>>ti;
	vb=p*l*t;
	vt=phi*r*r*ti;
	cout<<"Volume balok adalah : "<<vb<<endl;
	cout<<"Volume tabung adalah : "<<vt<<endl;
	total=vb+vt;
	cout<<"Total volumenya adalah : "<<total<<endl;
	return 0;
	
	
}
