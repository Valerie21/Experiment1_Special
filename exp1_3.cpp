#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
int d1, d2;
double netbal, payment, avedailybal, interest;
float intrate;

cout<<fixed<<showpoint<<setprecision(3);

cout<<"Please enter the following information: "<<endl;
cout<<"Balance shown in the bill: ";
cin>>netbal;
cout<<"Amount of payment made: ";
cin>>payment;
cout<<"Number of days in the billing cycle: ";
cin>>d1;
cout<<"Number of days payment is made before billing cycle: ";
cin>>d2;
cout<<"Interest rate per month: ";
cin>>intrate;
cout<<"\n"<<"Computing interest...\n\n";

avedailybal = (netbal*d1 - payment*d2)/d1;
interest = avedailybal*intrate;

cout<<"Interest: "<<interest;

getch();
return 0;

}
