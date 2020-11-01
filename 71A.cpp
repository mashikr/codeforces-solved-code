#include<iostream>

using namespace std;

int main()
{
   int n,l;
   string str;
   char st[2];
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>str;
    l=str.length();
    int cont=0;
        if(l<11)
            cout<<str<<endl;
        else{
            for(int j=0;j<l;j++){
                if(j==0)
                    st[j]=str[j];
                else if(j==l-1)
                    st[1]=str[l-1];
                else
                    cont++;
            }
           cout<<st[0]<<cont<<st[1]<<endl;
        }
   }


   return 0;
}

