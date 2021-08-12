#include<iostream>
#include<math.h>

using namespace std;

bool checkPrime(int num){
  for (int i=2;i<sqrt(num);i++){
    if(num%i==0){
      return false;
    }
    return true;

  }
}
int main(){
  int num;
  cout<<"Enter a no:";
  cin>>num;
  bool result = checkPrime(num);
  if(result){
    cout<<"The no. is prime"<<endl;
  }
  else{
    cout<<"The no. is not prime"<<endl;
  }
}