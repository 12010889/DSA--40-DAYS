#include<iostream>
using namespace std;

int main(){
  
  int num1,num2;

  cout<<"Enter the two no.s"<<endl;

  cin>>num1>>num2;
  if(num1>num2){
    cout<<"num1 is greater";
  }
  else if(num1==num2){
    cout<<" num1 & num2 are equal";
  }
  else{
    cout<<"num2 is greater"<<endl;
  }
}