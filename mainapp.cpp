#include <iostream>

using namespace std;

int main(){
    
    const double EUR_per_Dollar{1.21};
    double EUR{0.0};
    double Dollar{0.0};
    
    cout<<"\xdb\xdb\xdb\xdb\xdb WELCOME TO CURRENCY CONVERTER  \xdb\xdb\xdb\xdb\xdb\
    xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb"<<endl;
    start:
    cout<<"\nEnter amount  in Dollar to convert to EUR";
    cin>>Dollar;
    
    EUR=Dollar*EUR_per_Dollar;
    
    cout<<"\nThe requested amount in EUR is;" <<EUR<<endl;
    
    char c;
    cout<<"Wanna do more conversion? \n\t >";
    cin>>c;
    if(c=='y' || c=='Y')
     goto start;
    if(c=='n' || c=='N')
       cout<<"Thanks for using this  serivces";
       
       cout<<endl;
    
    
    
}
