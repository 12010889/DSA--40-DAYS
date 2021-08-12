//Checking a whether the no lies among two no.s

#include <iostream>
using namespace std;

int main(){
  int num;
  cout<<"Enter the no:"<<endl;

  cin>>num;
  if(num>=10 && num<=90){
   cout<<"Then the no lies between 10 & 90"<<endl;
  }
  else{
    cout<<"The no doesn't lie between 10 & 90";
  }
}
