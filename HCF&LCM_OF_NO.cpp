// L.C.M and H.C.F of two no.s
#include<iostream>
using namespace std;

int main(){

  int num1,num2,c;
cout<<"Enter the two no.s:"<<endl;
cin>>num1>>num2;

c=num1*num2;

while(num1!=num2){
  if(num1>num2)
    num1=num1-num2;
  
  else
  num2=num2-num1;
}
cout<<"HCF = "<<num1<<endl;
cout<<"LCM = "<<c/num1<<endl;

}
