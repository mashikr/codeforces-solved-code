#include<iostream>
using namespace std;

int main()
{
    string a;
    int x=0,y=0,i,z;
    cin>>z;
    cin>>a;

    for(i=0; i<z; i++){
        if(a[i]=='A'){
          x++;
        }
        else{
           y++;
        }
    }
    if(x>y) cout<<"Anton"<<endl;
    else if(y>x) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
}

