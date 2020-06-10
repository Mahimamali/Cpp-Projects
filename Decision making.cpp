#include<iostream>
using namespace std;
int main()
{
    int i,age,ch;
    do
    {
    cout<<"Enter the age: ";
    cin>>age;
    if(age>=18)
     {
        cout<<"You are eligible\n";
     }
    else
     {
        cout<<"You are not eligible\n";
     }
     cout<<"\n*** If you want to check more enter '1' or else enter '0' ***"<<endl;
     cin>>i;
    }
    while(i==1);
}
