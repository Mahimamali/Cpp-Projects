#include<iostream>
using namespace std;
int main()
{
    int a[5],i;
    cout<<"Enter elements: ";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"You entered: ";
    for(i=0;i<5;i++)
    {
        cout<<endl<<*(a+i);
    }
    return 0;
}
