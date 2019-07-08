#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int premiumsold, slsold, boxsold, gasold, premiumsales, slsales, boxsales, gasales;
    
    cout<<"Enter number of general admission tickets sold: ";
    cin>>gasold;
    cout<<"Enter number of box tickets sold: ";
    cin>>boxsold;
    cout<<"Enter number of sideline tickets sold: ";
    cin>>slsold;
    cout<<"Enter number of premium tickets sold: ";
    cin>>premiumsold;	
    
    gasales = 25*gasold;
    boxsales = 50*boxsold;
    slsales = 100*slsold;
    premiumsales = 250*premiumsold;
    
    cout<<"ticketPrice\t"<<"numberOfTicketsSold\t"<<"ticketSales"<<endl;
    cout<<"25\t\t"<<gasold<<"\t\t\t"<<gasales<<endl;
    cout<<"50\t\t"<<boxsold<<"\t\t\t"<<boxsales<<endl;
    cout<<"100\t\t"<<slsold<<"\t\t\t"<<slsales<<endl;
    cout<<"250\t\t"<<premiumsold<<"\t\t\t"<<premiumsales<<endl;
    
    getch();
    return 0;
}
