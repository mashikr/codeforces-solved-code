#include<iostream>
using namespace std;

int main()
{
    int m,n,cont=0;
    cin>>m>>n;
    while(m!=0 && n!=0){
        m--;
        n--;
        cont++;
    }
    if(cont%2==0) cout<<"Malvika"<<endl;
    else cout<<"Akshat"<<endl;


   return 0;
}
