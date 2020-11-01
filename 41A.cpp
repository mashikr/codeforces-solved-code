#include<iostream>
using namespace std;

int main()
{
    int i,j,k;
    string a,b,c;
    cin>>a>>b;
    c=a;
    j=k=a.size();
    for(i=0; i<k; i++,j--){
        c[j-1]=a[i];
    }

    if(c==b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
