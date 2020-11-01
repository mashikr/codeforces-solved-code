#include<iostream>
using namespace std;

int main()
{
   int n,p,q,val,i,key=0;

   cin>>n;
   int arr[n];
   for(i=0; i<n; i++) arr[i]=i+1;

   cin>>p;
   for(i=0; i<p; i++){
    cin>>val;
    if(arr[val-1]!=0 && val==arr[val-1]){
         key++;
         arr[val-1]=0;
    }
   }

   cin>>q;
   for(i=0; i<q; i++){
    cin>>val;
    if(arr[val-1]!=0 && val==arr[val-1]){
         key++;
         arr[val-1]=0;
    }
   }
    if(key==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;

   return 0;
}
