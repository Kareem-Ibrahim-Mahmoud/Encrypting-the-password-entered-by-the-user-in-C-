#include <iostream>
#include <conio.h>
#include <algorithm>
#include <string>
#define   ll long long
using namespace std;

int main()
{
/*
    char ch;
    string password="";


    while((ch=getch())!='\r')
    {

        cout<<"#";
        password=password+ch;

    }
cout<<endl<<password<<endl;
*/
ll n=3;
 ll a[n];
 for(ll i=0;i<n;i++){
    cin>>a[i];
 }

 sort(a,a+2);
 for(ll i=0;i<n;i++){
    cout<<a[i]<<endl;
 }
sort(a, a+2, greater<ll>());

 cout<<endl;
 for(ll i=0;i<n;i++){
    cout<<a[i]<<endl;
 }
return 0;
}
