#include<iostream>
using namespace std;
int main()
{
    int ExitOrNot=1;
    do{cout<<"What can I calculate for you today?";
    cout<<"\n Select 1 for Sum \n Select 2 for Difference \n Select 3 for Product \n Select 4 for Division \n Select 5 for more options\n";
    float Sum=0; float Diff=0; float Product=1; float Quotient=1;
    float Diff1=0; float Diff2=0; float Dividend; float Divisor;
    float Princ; float Rate; float Time; float n;
    int Option1; int Option2; int NoOfEntries; float Entries[100]; int counter=0;
    cin>>Option1;


    if(Option1==1||Option1==3)
    {cout<<"\nEnter how many values to work on:\n";
    cin>>NoOfEntries;
    cout<<"\nEnter each value one by one:\n";
    do{cin>>Entries[counter];
       cout<<"\nThe "<<counter+1<<"th entry is\t"<<Entries[counter]<<"\n";   
       counter++;}
       while(counter<NoOfEntries);
    counter=0;
    if(Option1==1)
          {do{Sum+=Entries[counter];counter++;}while(counter<NoOfEntries);
          cout<<"\nSum of all entires given is "<<Sum;}
    else
          {do{Product*=Entries[counter];counter++;}while(counter<NoOfEntries);
          cout<<"\nProduct of all entries given is"<<Product;}}


    if(Option1==2)
    {cout<<"\nEnter the two values whose positive difference you need.";
    cout<<"\n First value:"; cin>>Diff1;
    cout<<"\n Second value:"; cin>>Diff2;
    if(Diff1>=Diff2)Diff=Diff1-Diff2;
    else Diff=Diff2-Diff1;
    cout<<"\nThe difference is "<<Diff;}


    if(Option1==4)
    {cout<<"\nEnter the dividend\n";cin>>Dividend;
     cout<<"\nEnter the divisor";cin>>Divisor;
     Quotient=Dividend/Divisor;
     cout<<"\nThe quotient is"<<Quotient; }


    if(Option1==5) 
    {cout<<"\nExtension under construction";}


    cout<<"\nThanks for using this calculator";
    cout<<"\nWould you like to do another operation?\nOption1:Yes\nOption2:No\n";
    cin>>ExitOrNot;}while(ExitOrNot==1);
    return 0;}