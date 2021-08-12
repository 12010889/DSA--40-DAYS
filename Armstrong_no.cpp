//Checking whether a no is Armstrong or not

#include<iostream>
#include<math.h>

using namespace std;

bool Armstrong(int num){
  int digit=0,temp=num;

  while(temp!=0){
    digit++;
    temp=temp/10;
  }
  int sum=0;
  for(temp=num;temp!=0;temp/=10){
    sum+=pow(temp%10,digit);
  }
  if(sum == num){
    return true;
  }
  return false;

}

int main(){
 int num;
 cin>>num;
 bool result= Armstrong(num);
 if(result){
   cout<<"The no. is Armstrong"<<endl;
 }
 else{
   cout<<"The no is not Armstrong"<<endl;
 }
 return 0;
}
