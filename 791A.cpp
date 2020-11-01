#include<iostream>

using namespace std;

int main()
{
   int n,m,cont=0;
   cin>>n>>m;
   while(n<=m){
    n*=3;
    m*=2;
    cont++;
   }
   cout<<cont<<endl;

   return 0;
}
