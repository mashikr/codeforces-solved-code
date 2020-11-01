#include<iostream>
using namespace std;

int main()
{
    int i,j,m,n;
    int arr[5][5];
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
          cin>>arr[i][j];
          if(arr[i][j]==1){
            m=i;
            n=j;
          }
        }
    }
    cout<<(m>2 ? m-2 : 2-m)+(n>2 ? n-2 : 2-n)<<endl;
}
