#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,num,count=0;
    cout<<"Enter a number" ;
    cin>>num;
    for(i=2;i<=sqrt(num+1);i++)
    {
      if(num%i==0)
      {
        count++;
        cout<< "not a prime number";
        
       }
    }
    if(count==0) 
       cout<<" a prime number";
    
 }
    
    
   
   