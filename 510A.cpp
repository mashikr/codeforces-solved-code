#include<iostream>

using namespace std;

int main()
{
    string a="",b="",c="";
    int m,n,i,j;
    cin>>m>>n;
    for(i=0; i<n; i++){
        a+='#';
        b+='.';
    }
    c=b;
    b[n-1]='#';
    c[0]='#';

    for(i=1; i<=m; i++){
        if(i%2!=0) cout<<a<<endl;
        else{
            if(i%4==0) cout<<c<<endl;
            else cout<<b<<endl;
        }
    }


    return 0;
}

