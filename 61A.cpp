#include<iostream>

using namespace std;

int main()
{
   int i,l;
   string a,b,c="";
   cin>>a>>b;
   l=a.size();
   for(i=0; i<l; i++){
    if(a[i]==b[i]) c+='0';
    else c+='1';
   }

   cout<<c<<endl;

   return 0;
}
