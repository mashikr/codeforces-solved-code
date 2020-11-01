#include<iostream>
using namespace std;

int main()
{
    string a,b,c;
    int x=0,y=0,i;
    cin>>a;
    b=c=a;

    for(i=0; i<a.size(); i++){
        if(a[i]>='A' && a[i]<='Z'){
          b[i]=tolower(a[i]);
          x++;
        }
        else{
           c[i]=toupper(a[i]);
           y++;
        }
    }
    if(y>=x) cout<<b<<endl;
    else cout<<c<<endl;
}
