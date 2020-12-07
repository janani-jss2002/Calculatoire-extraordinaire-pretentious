#include<iostream>
#include<string.h>

int TakeEntries(float A[1000], int n, int i, float ARep[1000])
{     std::cout<<"Enter the number of values to work with:\n";
      std::cin>>n;
      for(i=0;i++;i<n)
      {std::cout<<"Enter the"<<i<<"th entry";
       std::cin>>A[i]; A[i]=ARep[i];
       std::cout<<"The "<<i+1<<"th entry is"<<ARep[i];}
       return 0;}


float Add(float A[1000], int n, int i, float Summ)
{     for(int i=0;i++;i<n)
      {Summ+=A[i];}
      return 0;}


float Prod(float A[1000], float n, float Produc)
{     for(int i=0;i++;i<n)
      {Produc*=A[i];}
      return 0;}


float Subtract(float No1, float No2, float Diffe)
{     std::cout<<"\nEnter the two values whose positive difference you need.";
      std::cout<<"\n First value:"; std::cin>>No1;
      std::cout<<"\n Second value:"; std::cin>>No2;
      if(No1>=No2)Diffe=No1-No2;
      else Diffe=No2-No1;
      std::cout<<"\nPositive difference between given values is"<<Diffe;
      return 0;}


float Divide(float DivideThis, float DivideBy, float Quot)
{     std::cout<<"Enter dividend:";std::cin>>DivideThis;
      std::cout<<"\nEnter divisor:";std::cin>>DivideBy;
      Quot=DivideThis/DivideThis;
      std::cout<<"The quotient is"<<Quot;
      return 0;}


int main()
{   float Sum=0; float Diff=0; float Product=1; float Quotient=1;
    float Diff1=0; float Diff2=0; float Dividend; float Divisor;
    float Princ; float Rate; float Time; float n;
    int Option1; int Option2; int ExitOrNot=1; int counter;
    int NoOfEntries; float Entries[1000]; float EntriesMirror[1000];
    
    do
    {std::cout<<"What can I calculate for you today?";
     std::cout<<"\n Select 1 for Sum \n Select 2 for Difference \n Select 3 for Product \n Select 4 for Division \n Select 5 for more options\n";
     std::cin>>Option1;

    if(Option1==1||Option1==3)
    {TakeEntries(Entries, NoOfEntries, EntriesMirror);
     if(Option1==1){Add(Entries,NoOfEntries, counter, Sum);std::cout<<"The sum of the numbers entered is"<<Sum;}
     else{Prod(Entries,NoOfEntries, counter,Product);std::cout<<"\nProduct of all entries given is"<<Product;}}

    if(Option1==2)
    { Subtract(Diff1,Diff2,Diff);}

    if(Option1==4)
    { Divide(Dividend,Divisor,Quotient);}

    if(Option1==5) 
    {std::cout<<"\nExtension under construction";}

    std::cout<<"\nThanks for using this calculator";
    std::cout<<"\nWould you like to do another operation?\nOption1:Yes\nOption2:No\n";
    std::cin>>ExitOrNot;}while(ExitOrNot==1);
    return 0;}