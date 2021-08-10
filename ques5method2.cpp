#include<iostream>
using namespace std;

int main(){
  int factorial(int);
  int fact,num;
  cout<<"Enter a number";
  cin>>num;
  fact=factorial(num);
  cout<<"Factorial of a number is:"<<fact<<endl;
  return 0;
}
int factorial(int n){
if(n<0){
  return false;
}
else if(n==0 || n==1){
 return 1;
}
else{
return(n*factorial(n-1));
}

}