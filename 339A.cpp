#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    int i,j=0,k;
    cin>>a;
    k=a.size();
    char arr[(k/2)+1];

    for(i=0; i<k; i++){
       if(i%2==0){
        arr[j]=a[i];
        j++;

       }
    }

    sort(arr, arr+j);

    for(i=0; i<j; i++){
        if(i==(j-1))
            cout<<arr[i]<<endl;
        else
            cout<<arr[i]<<"+";
    }
    return 0;
}
