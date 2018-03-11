#include <iostream>
#include "customer.h"
#include "food.h"
#include<cstdlib>
//#include "breakfast.h"
using namespace std;


int main()
{
    cout<<"   WELCOME TO CAFELEX , DIGITALIZING YOUR CAFE EXPERIENCE "<<endl;
    system("pause");
    int prevbalance;
    string text;

    char c='y';
     customer mitesh;
    mitesh.selectmode();
     prevbalance=mitesh.balance;
    //system("cls");
    system("pause");
    food pravesh;
    do{
    pravesh.showmenu();

    cout<<"want to order more(y/n)"<<endl;
    cin>>c;
    }while (c=='y');

    mitesh.updaterecord();

    system("cls");
    //cout<<mitesh.balance;
    cout<<"your bill is : "<<endl;
     string getcontent;
    ifstream openfile ("bill.txt");
    if(openfile.is_open())
    {
        while(! openfile.eof())
        {
            getline(openfile, getcontent);
            cout << getcontent << endl;
        }
        cout<<"balance before transaction was :"<<prevbalance<<endl;
        cout<<"total :"<<mitesh.onetimetotal<<endl;
        cout<<"remaining balance in the account :"<<mitesh.balance<<endl;
    }
    system("pause");
    system("cls");
    cout<<setw(50)<<setfill('*')<<"!!!!!   THANKYOU FOR PROVIDING SERVICE !!!!"<<setw(20)<<"\n"<<endl;


    return 0;
}
