#include<iostream>
int main()
{
    int ExitOrNot=1;
    do{std::cout<<"What can I calculate for you today?";
    std::cout<<"\n Select 1 for Sum \n Select 2 for Difference \n Select 3 for Product \n Select 4 for Division \n Select 5 for more options\n";
    float Sum=0; float Diff=0; float Product=1; float Quotient=1;
    float Diff1=0; float Diff2=0; float Dividend; float Divisor;
    float Princ; float Rate; float Time; float n;
    int Option1; int Option2; int NoOfEntries; float Entries[100]; int counter=0;
    std::cin>>Option1;


    if(Option1==1||Option1==3)
    {std::cout<<"\nEnter how many values to work on:\n";
    std::cin>>NoOfEntries;
    std::cout<<"\nEnter each value one by one:\n";
    do{std::cin>>Entries[counter];
       std::cout<<"\nThe "<<counter+1<<"th entry is\t"<<Entries[counter]<<"\n";   
       counter++;}
       while(counter<NoOfEntries);
    counter=0;
    if(Option1==1)
          {do{Sum+=Entries[counter];counter++;}while(counter<NoOfEntries);
          std::cout<<"\nSum of all entires given is "<<Sum;}
    else
          {do{Product*=Entries[counter];counter++;}while(counter<NoOfEntries);
          std::cout<<"\nProduct of all entries given is"<<Product;}}


    if(Option1==2)
    {std::cout<<"\nEnter the two values whose positive difference you need.";
    std::cout<<"\n First value:"; std::cin>>Diff1;
    std::cout<<"\n Second value:"; std::cin>>Diff2;
    if(Diff1>=Diff2)Diff=Diff1-Diff2;
    else Diff=Diff2-Diff1;
    std::cout<<"\nThe difference is "<<Diff;}


    if(Option1==4)
    {std::cout<<"\nEnter the dividend\n";std::cin>>Dividend;
     std::cout<<"\nEnter the divisor";std::cin>>Divisor;
     Quotient=Dividend/Divisor;
     std::cout<<"\nThe quotient is"<<Quotient; }


    if(Option1==5) 
    {std::cout<<"\nExtension under construction";}


    std::cout<<"\nThanks for using this calculator";
    std::cout<<"\nWould you like to do another operation?\nOption1:Yes\nOption2:No\n";
    std::cin>>ExitOrNot;}while(ExitOrNot==1);
    return 0;}