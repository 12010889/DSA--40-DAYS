#include<iostream>

using namespace std;

int main(){
  int num,temp,sum=0;
  cout<<"Enter a no:"<<endl;
  cin>>num;

 while(num>0){
  temp=num%10;

    sum=sum+temp;
    num=num/10;
  }
cout<<"The sum is: "<<sum<<endl;
return 0;
}