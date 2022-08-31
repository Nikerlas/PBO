#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   int r, p, l, t, ti, volumebalok;
   float phi, totalvolume, volumetandon;
   

   raptor_prompt_variable_zzyz ="masukan panjang balok : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> p;
   raptor_prompt_variable_zzyz ="masukan lebar balok : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> l;
   raptor_prompt_variable_zzyz ="masukan tinggi balok : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> t;
   raptor_prompt_variable_zzyz ="masukan jari jari tabung : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> r;
   raptor_prompt_variable_zzyz ="masukan tinggi tabung : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> ti;
   volumebalok=p*l*t;
   phi =3.14;
   volumetandon =phi*r*r*t;
   cout << volumebalok << endl;   
   cout << volumetandon << endl;   
   totalvolume =volumebalok+volumetandon;
   cout << totalvolume << endl;
   return 0;
}
