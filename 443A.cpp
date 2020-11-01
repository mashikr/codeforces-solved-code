#include<iostream>

using namespace std;

int main()
{
    string a;
    int n,i,j,l;
    getline(cin,a);

    l=a.size();
    n=l/3;
    for(i=1; i<l; i=i+3){
        for(j=i+3; j<l; j=j+3){
            if(a[i]>='a' && a[i]<='z' && a[i]==a[j]) {
                a[j]=0;
                n--;
            }
        }
    }
    cout<<n<<endl;


    return 0;
}


