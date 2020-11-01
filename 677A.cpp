#include<iostream>

using namespace std;

int main()
{
   int n,h,i,cont=0,x;
   cin>>n>>h;
   for(i=0; i<n; i++){
    cin>>x;
    if(x<=h) cont++;
    else cont+=2;
   }
   cout<<cont<<endl;

   return 0;
}
