#include<iostream>
using namespace std;

int main()
{
    int i,n,x=0,y=0,cont=0;
    string a;

    cin>>n;
    for(i=0; i<n; i++){
      cin>>a;
      if(a=="01"){
        x++;
        if(y>0) cont++;
        y=0;
      }
      else{
        y++;
        if(x>0) cont++;
        x=0;
      }
    }
    if(x>0 || y>0) cont++;

    cout<<cont<<endl;

    return 0;
}
