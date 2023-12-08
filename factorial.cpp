#include <iostream>

using namespace std;
int fact(unsigned long long int n){
   if(n==0)
    return 1;
   else
    return n*fact(n-1);

   }

int main()
{
   unsigned long long int x;
    cout<<"Inter the number:";
    cin>>x;
    int f=1;
    for(int i=x;i=1>=1;i--){
        f*=i;
    }
    cout<<"The factorial is:"<<f<<endl;

    return 0;
}
