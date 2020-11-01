#include<iostream>
using namespace std;

int main()
{
    int p,tk,pic,i,total=0;
    cin>>p>>tk>>pic;

    for(i=1; i<=pic; i++){
        total += p*i;
    }

    if(total-tk>0)
    cout<<total-tk<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}
