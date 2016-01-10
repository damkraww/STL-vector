#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#define pi 3.14159265
using namespace std;

int main(){
	
	vector<float> v1;
	vector<float> v2;
	float x;
	int w;

	cout << "podaj rozmiar wektorow "; cin >> w;
	cout << endl <<"wprowadz wartosci wektora v1 " << endl;
	for (int i = 0; i < w; i++)
	{
		cin >> x;
		cout<<endl;
		v1.push_back(x);
	}

	cout << endl << "wprowadz wartosci wektora v2 " << endl;
	for (int i = 0; i < w; i++)
	{
		cin >> x;
		cout<<endl;
		v2.push_back(x);
	}
	
	cout<<"rozmiar wektora v1 = "<<v1.size()<<endl;
	cout<<"rozmiar wektora v2 = "<<v2.size()<<endl;
	
	if (v1.size() == v2.size())
	{
		cout << "Rozmiary wektorow v1 i v2 sa takie same i wynosza " << v1.size() << endl << endl;
	}
	
	vector<float> v3;
	
		////mnozenie////
	cout << endl << "v1*v2 = v3[";
	for (int i = 0; i < w; i++)
	{
		float iloczyn = v1[i] * v2[i];
		v3.push_back(iloczyn);
		cout << v3[i] << "  ";
	}
	cout << "]" << endl;
	
	/////dodawanie/////
	cout << endl << "v1+v2 = v3[" ;

	for (int i = 0; i < v1.size(); i++)
	{	
		v3[i] = v1[i] + v2[i];
		cout << v3[i] << "  ";
	}
	cout << "]" << endl;
	
	/////odejmowanie////
	cout << endl << "v1-v2 = v3[" ;
	for (int i = 0; i < w; i++)
	{
		v3[i] = v1[i] - v2[i];
		cout << v3[i] << "  ";
	}
	cout << "]" << endl;
	

	
	////kat dla wektorow dwuwymiarowych////
	if (v1.size() == 2)
	{
		float a = sqrt(v1[0] * v1[0] + v1[1] * v1[1]);
		float b = sqrt(v2[0] * v2[0] + v2[1] * v2[1]);

		float kat = (v1[0] * v2[0] + v1[1] * v2[1]) / (a*b);

		float result = acos(kat) * 180 / pi;

		if (kat >= 1.0)
			cout << endl << "Wektory sa rownolegle --> brak kata" << endl;
		else
			cout << endl << "Kat pomiedzy wektorami --> " << result << "  stopni" << endl;
	}
	else
		cout << endl << "wektory nie sa dwuwymiarowe" << endl;

	system("pause");
	return 0;
}
