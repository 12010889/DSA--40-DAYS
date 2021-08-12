// finding factor of any number
#include <iostream>
using namespace std;

int main(){
  int  num;
  
  cout<<"Enter the number:";
  cin>>num;
cout<<"The factor of"<<num <<"are:";
for(int i=1;i<=num;i++){
  if(num%i==0){
    cout<<i<<"\t";
  }
  
}
return 0;
}
