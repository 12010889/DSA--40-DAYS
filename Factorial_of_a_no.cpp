// Factorial of a no Using loop
#include<iostream>
using namespace std;

int main(){

int i,fact=1,num;
cout<<"Enter a number:"<<endl;

cin>>num;
for(i=1;i<=num;i++){
  fact=fact*i;
}
cout<<"Factorial of" <<num<< "is:"<<fact<<endl;
}
