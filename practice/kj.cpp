#include<iostream>
#include<math.h>
using namespace std;
int main (){
  int n;
  cout<<"enter the number"<<endl;
  cin>>n;
  int ans =0;
  int i=0;
  while(n!=0){
    int bit=n&1;
   ans=ans+(bit*pow(10,i));
   n=n>>1;
   i++;
  }
  cout<<"the binary no.is "<<ans<<endl;
  return 0;
}