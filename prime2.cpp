#include<iostream>
using namespace std;
int main()
{
    int i,num,count=0;
    cout<<"Enter a number" ;
    cin>>num;
    for(i=2;i<=num/2+1;i++)
    {
      if(num%i==0)
      {
        cout<< "not a prime number";
        count++;
       }
    }
    if(count==0) 
       cout<<" a prime number";
    
 }
    
    
   
   