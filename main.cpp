#include <iostream>

using namespace std;

int main() {
  int marks;
  cin>>marks;
  if(marks>100 || marks<0)
  {
    return -1;
  }
  else if(marks>90){
    cout<<"you got A grade";
  }
  else if(80<marks && marks<=90){
    cout<<"you got B grade";
  }
  else if(70<marks && marks<=80){
    cout<<"you got C grade";
  }
  else if(30<marks && marks<=70){
    cout<<"you got D grade";
  }
  else{
    cout<<"you are fail";
  }
}