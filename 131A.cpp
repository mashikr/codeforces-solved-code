#include<iostream>
using namespace std;

int main()
{
    string a,b;
    int k=0,l=0;
    cin>>b;
    a=b;

    for(int i=0; i<a.size(); i++){
        if(i==0){
            if(a[i]>='a' && a[i]<='z')
                a[i] -= 32;
            else
                l++;
        }
        else{
           if(a[i]>='A' && a[i]<='Z'){
            a[i] += 32;
            l++;
           }
            else{
                k++;
            }
        }
    }

    if(l==a.size()){
        a[0] += 32;
        cout<<a<<endl;
    }
    else if(k>0)
        cout<<b<<endl;
    else
        cout<<a<<endl;

    return 0;
}
