#include<iostream>
using namespace std;

int main()
{
    int n,p,cont=0;
    cin>>n>>p;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0 && arr[i]>=arr[p-1])
            cont++;
    }
    cout<<cont<<endl;
    return 0;
}
