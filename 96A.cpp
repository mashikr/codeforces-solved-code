#include<iostream>
using namespace std;

int main()
{
    string a;
    int i,cont1=0,cont2=0;
    cin>>a;

    for( int i=0; i<a.size(); i++){
        if(a[i]=='1'){
            cont1++;
            cont2=0;
            if(cont1>6){
                cout<<"YES"<<endl;
                break;
            }
        }
        else{
            cont2++;
            cont1=0;
            if(cont2>6){
              cout<<"YES"<<endl;
                break;
            }
        }
    }
    if(cont1<7 && cont2<7){
        cout<<"NO"<<endl;
    }
    return 0;
}
