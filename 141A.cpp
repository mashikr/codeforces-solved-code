#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c;
    int l1,l2;

    cin>>a>>b>>c;
    a+=b;

    l1=a.size();
    l2=c.size();

    if(l1!=l2) cout<<"NO"<<endl;
    else{
        char arr1[l1];
        strcpy(arr1,a.c_str());
        char arr2[l2];
        strcpy(arr2,c.c_str());

        sort(arr1,arr1+l1);
        sort(arr2,arr2+l2);

        a=arr1;
        c=arr2;

        if(a==c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
