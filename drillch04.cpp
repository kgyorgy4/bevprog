#include "std_lib_facilities.h"
int main()
{
	double szam;
	double sum=0;
	vector<double> vektor;
	string egyseg;
	cout<<"Elfogadott mértékegységek: cm, in, ft, m.\n";
	cout<<"Például: '11 m', '86 in', '61 ft', '2 cm'.\n";

while(egyseg!="|")
	{
		cout<<"Kilépéshez írjon egy '|' karktert, folytatáshoz nyomjon bármi mást.\n";
		cin>>egyseg;
			if (egyseg=="|")
				break;
		cout<<"Adjon meg egy számot (mértékegység nélkül): \n";
		cin>>szam;	
		cout<<"Adjon meg egy mértékegységet: (cm,m,ft,in).\n";
		cin>>egyseg;
		while (egyseg!="cm" && egyseg!="m" && egyseg!="ft" && egyseg!="in" && egyseg!="|")
			{
				cout<<"Helytelen mértékegység. Elfogadott mértékegységek: m, cm, ft, in.\n";
				cin>>egyseg;
			}
			 if (egyseg=="m")
		{
			szam=szam;
		}
		else
			if (egyseg=="cm")
		{
				szam=szam/100;
		}
		else
			if (egyseg=="ft")
		{
				szam=szam*0.254;
		}
		else
			if (egyseg=="in")
		{
				szam=szam*0.3048;
		}
		vektor.push_back(szam);
		sum+=szam;
		
}
double min=100000;
for (int i=1;i<vektor.size();i++)
	{
		if(vektor[i]<vektor[min])
			{
				min=i;
			}
	}

double max=0;
for (int i=1;i<vektor.size();i++)
	{
		if(vektor[i]>vektor[max])
			{
				max=i;
			}
	}

sort(vektor);
cout << "Rendezve: \n";

for (int i=0; i<vektor.size(); i++){
	cout<<vektor[i]<<" m \n";
	}
cout<<"Összegük: "<<sum<<" m\n";
cout<<"Legnagyobb érték: "<<vektor[max]<<" m\n";
cout<<"Legkisebb érték:"<<vektor[min]<<" m\n";
cout<<vektor.size()<<" számot adott meg.\n";
return 0;
}