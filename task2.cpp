#include<iostream>
using namespace std;
class calculator
{
    private:
        int a,b;
        int ch;
    public:
      void menu( );
};
void calculator ::menu( )
{
    cout<<"**********MENU**********";
    cout<<"\n1.Additions";
    cout<<"\n2.subtraction";
    cout<<"\n3.multiplycation";
    cout<<"\n4.Division";

    cout<<"\nEnter your choice :- ";
    cin>>ch;
    switch(ch)
    {
        case 1:{
             cout<<"\nEnter First Number :- ";
             cin>>a;
             cout<<"\nEnter Second Number :- ";
             cin>>b;
             cout<<"Results="<<a+b;
             break;
        }
        case 2:{
             cout<<"\nEnter First Number :- ";
             cin>>a;
             cout<<"\nEnter Second Number :- ";
             cin>>b;
             cout<<"Results="<<a-b;
             break;
        }
        case 3:{
             cout<<"\nEnter First Number :- ";
             cin>>a;
             cout<<"\nEnter Second Number :- ";
             cin>>b;
             cout<<"Results="<<a*b;
             break;
        }
        case 4:{
             cout<<"\nEnter First Number :- ";
             cin>>a;
             cout<<"\nEnter Second Number :- ";
             cin>>b;
             cout<<"Results="<<a/b;
             break;
        }
        default:
        cout<<"Enter you correct Choice!\n please Try again";
        break;
  
    }
}
main( )
{
    char ch1;
    calculator c1;

    do
     {
        c1.menu( );
        cout<<"\nEnter menu again (y/n):- ";
        cin>>ch1;
    }
    while(ch1=='y' || ch1=='y');

}
