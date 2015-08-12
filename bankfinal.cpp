#include<iostream>
#include<stdlib.h>
using namespace std;

class bank
{
public:
    int i,k,v,indicate=0;
    char name1[5][50],name2[5][50],type[5][30],r;
    int a[100],ac[100],bl[100],b[100],c,m;
    void input();
    void deposit();
    void withdraw();
    int tofind();
    void display();
    int delet();
    void about();
};
void bank::input()
{
c=0;

while(1)
{


    cout<<"To continue press (y/n)\n-----------------------"<<endl;
    cin>>r;

if(r == 'Y' ||r == 'y' )
{
    cout<<"\nEnter Your first  Name        : "<<endl;
    cin>>name1[c];
    cout<<"Enter Your lest Name          : "<<endl;
    cin>>name2[c];
    cout<<"Enter Your account Type       : "<<endl;
    cin>>type[c];

    aci:
    cout<<"Enter Account Number          : "<<endl;
    cin>>a[c];

    k=a[c];
    for( int j=0;j<c;j++)
    {
        if(k==a[j])
        {
            cout<<"\nThis Account number Already exists "<<endl;
            goto aci;
        }
    }
    dpi:
    cout<<"Enter starting Deposit Amount : "<<endl;
    cin>>bl[c];
    if(bl[c]<1000)
    {
    cout<<"\nIts against our policy the amount should be more then 1000tk"<<endl<<"Please enter the amount again\n"<<endl;
    goto dpi;
    }
    c++;
}
    else if (r == 'n' ||r == 'N' )
    {
    break;
    }
}
}
void bank:: deposit()
{
tofind();

if(indicate==1)
{
     cout<<"\n\nEnter Balance you want to deposit:\n-------------------------------------"<<endl;
     cin>>b[c];

    if(b[c]>500)
    {
        bl[c]=bl[c]+b[c];
    }
    else
       {
        cout<<"\n\aIts against our policy the amount should be more then 500tk\n"<<endl;
        cout<<"\n\nRe-Enter Balance you want to deposit:\n---------------------------------------"<<endl;
        cin>>b[c];
        bl[c]=bl[c]+b[c];
       }
}

}
void bank:: withdraw()
{

    tofind();
    if(indicate==1)
{
    cout<<"\n\nEnter Balance you want to withdraw:\n-----------------------------------"<<endl;
    cin>>m;
    if(m<10000)
    {

         bl[c]=bl[c]-m;
    }
    else
   {
         cout<<"\nIts against our policy the amount should be less then 10000tk\n"<<endl;
         cout<<"\n\nre-Enter Balance you want to withdraw:\n-----------------------------------------"<<endl;
         cin>>m;
         bl[c]=bl[c]-m;
   }
}
}

int bank :: tofind()
{
cout<<"Enter account number:\n------------------------"<<endl;
cin>>k;
for( c=0;c<5;c++)
{

    if(k==a[c])
    {
        indicate=1;
        break;
    }
    else
        indicate=0;
}

if(indicate==1)
     {cout<<"\n\nAccount number is valid\n--------------------------------"<<endl;return 1;}
else

     { cout<<"\n\nAccount number is not valid"<<endl; cout<<"\n\n\nPress 0 for back to main menu::::\n---------------------------------"<<endl;
       cin>>v;
       return 0;
       }
}
void bank :: display()
{

int m=tofind();
if (m==1)
{

    cout<<"Name              :"<<name1[c]<<" "<<name2[c]<<endl;
    cout<<"Account number    :"<<a[c]<<endl;
    cout<<"Account type      :"<<type[c]<<endl;
    cout<<"Balance in account:"<<bl[c]<<endl;
    cout<<"\n\n\nPress 0 for back to main menu::::\n---------------------------------"<<endl;
    cin>>v;
}
}
int bank::delet()
{
     int o,v;
    cout<<"Enter account number:\n------------------------"<<endl;
cin>>k;
for( c=0;c<5;c++)
{

    if(k==a[c])
    {
        indicate=1;
        break;
    }
    else
        indicate=0;
}

if(indicate==1)
     {cout<<"\n\nAccount number is valid\n--------------------------------"<<endl;
       o=a[c];
      for(v=0;v<=c;v++)
    {
        a[c]=a[c+1];
        a[c-1]=0;
    }
    cout<<"\n\nBut now as you requested your account have been closed";
     cout<<"\n\n\nPress 0 for back to main menu::::\n---------------------------------"<<endl;
       cin>>v;
     return 1;}
else

     { cout<<"\n\nAccount number is not valid"<<endl; cout<<"\n\n\nPress 0 for back to main menu::::\n---------------------------------"<<endl;
       cin>>v;
       return 0;
       }

}
void bank :: about()
{
cout << "\n\n\t\tSPECIAL THANKS TO OUR HONORABLE TEACHER\n\t\t---------------------------------------\n\t\tMuhammad Faisal Imran\n"<<endl;
cout<<"\t\tProject Group members:\n\t\t----------------------\n\t\tShad Ahmed(Shiam)\n\t\tAminul Islam\n\t\tMasudur Rahman(Anik)\n\t\tshamim reza\n\n\n\n"<<endl;
cout<<"This is our first project and we try to give our best for this project all group\nmember are very happy to";
cout<<"complete this wonderful project it really feels good\nwhen we solve every single problem step by step thank you";
cout<<"to press that about \noption and reading about us.";
cout<<"\n\n\nPress 0 for back to main menu::::\n---------------------------------"<<endl;
cin>>v;
}
int main()
{

    while(1)
    {

system("cls");
cout<<"\t\t--Welcome To Our Banking System Application--\n\t***********************************************************"<<endl;
cout<<"\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
cout<<"\t\t---------------------------------------\n"<<endl;
        cout<<"\t\t1.Open a New Account:"<<endl;
        cout<<"\t\t2.Deposit to an Account:"<<endl;
        cout<<"\t\t3.Withdraw From An Account:"<<endl;
        cout<<"\t\t4.View An Account Details :"<<endl;
        cout<<"\t\t5.Close An Account:"<<endl;
        cout<<"\t\t6.About our application"<<endl;
        cout<<"\t\t0.Exit"<<endl;
        cout<<"\n \n \n\t\tChoose from option \n"<<endl;
        cout <<"\n\t\tPlease enter a choice :..";
        char ch;
        cin>>ch;
        system("cls");
        bank i;

        if(ch=='0')break;
        switch(ch)
        {
            case '1' : i.input();break;
            case '2' : i.deposit();break;
            case '3' : i.withdraw();break;
            case '4' : i.display();break;
            case '5' : i.delet();break;
            case '6' :i.about();break;
        }

    }
     cout << "\n\n\n\n\n\t\t\tThank you for using our Software\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

     return 0;
}

