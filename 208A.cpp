#include<iostream>
using namespace std;

int main()
{
    int i;
    string a,b="";
    cin>>a;
    for(i=0; i<a.size(); i++){
        if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B'){
            i+=2;
            if(b!="" && b[b.size()-1]!=' '){b+=" ";}
        }
        else{
            b+=a[i];
        }
    }
    cout<<b<<endl;

    return 0;
}


