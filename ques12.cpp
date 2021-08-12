#include <iostream>
using namespace std;



int main(){
  
int num,temp,digit,reverse=0;
   
  
 cout<<"Enter a no:"<<endl;
 cin>>num;
 temp=reverse;

  while(num!=0)
  {
   digit=num%10;
   reverse=(reverse*10)+digit;
   num=num/10;
  }
   if(temp==num){
   cout<<"The number is palindrome";
  }
  else{
    cout<<"the no is not palindrome";
  }
  }

