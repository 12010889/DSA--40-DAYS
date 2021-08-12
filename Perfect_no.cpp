//Checking whether a no is perfect or not

#include<iostream>
using namespace std;

int main(){
  int i,num,reminder,sum=0;

  cout<<"Enter the number"<<endl;

  cin>>num;

  for(i=1;i<num;i++){
   reminder=num%i;
   if(reminder == 0)
   sum=sum+i;
  }
  if(sum==num){
    cout<<"\n"<< num <<"The number is a perfect number";
  }
  else{
    cout<<"\n"<< num <<"The number is not a perfect number";
  
  }
}
