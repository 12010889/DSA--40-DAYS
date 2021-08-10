#include <iostream>

using namespace std;

int main(){

  int num1,num2,num3;
  cout<<"Enter the 3 numbers:"<<endl;

  cin>>num1>>num2>>num3;

  if(num1>num2 && num1>num3){
  cout<<"num1 is greatest among 3 no.s"<<endl;
  }
  else if(num2>num1 && num2>num3){
    cout<<"num2 is greatest among 3 no.s"<<endl;
  }
  else{
    cout<<"num3 is greatest among all 3 nos.";
  }
}