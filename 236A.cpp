#include<iostream>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int i,j,k,cont=1;
    k=a.size();
    char arr[k];
    arr[0]=a[0];

    for(i=1; i<k; i++){
        for(j=0; j<i; j++){
            if(a[i]!=arr[j]){
                arr[i]=a[i];
            }
            else{
                cont--;
                break;
            }
        }
        cont++;
    }

    if(cont%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}
