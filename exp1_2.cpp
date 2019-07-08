#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
double mass, volume, density;
cout<<fixed<<showpoint<<setprecision(2);

cout<<"Please enter the following data:"<<endl;
cout<<"Mass (g): ";
cin>>mass;
cout<<"Density (g/cm^3): ";
cin>>density;

volume = (4*density)/mass;

cout<<"Volume: "<<volume<<"cm";


getch;
return 0;

}
