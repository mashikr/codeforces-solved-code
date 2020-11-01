#include<iostream>
using namespace std;

int main()
{
    int n,m,cont2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int cont=0;
        for(int j=0;j<3;j++){
            cin>>m;
            if(m==1)
                cont++;
        }
        if(cont>1)
            cont2++;
    }
    cout<<cont2<<endl;

    return 0;
}


