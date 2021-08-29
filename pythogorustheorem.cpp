#include <iostream>

using namespace std;

bool pythogorus(int max,int a,int b){
if(max*max == a*a + b*b)
{
return true;
}
return false;
}

bool checktheorem(int a,int b,int c){
  bool result;
  if(a>b && a>c){
    result=pythogorus(a,b,c);
  }
  else if(b>c && b>a){
    result=pythogorus(b,a,c);
  }
  else{
    result=pythogorus(c,a,b);
  }
  return result;
}


int main(){

int a,b,c;
cin>>a>>b>>c;

bool result= checktheorem(a,b ,c);

if(result){
  cout<<"The triplet validate pythogorus theorem"<<endl;
}
else{
  cout<<"The triplet do'nt validate pythogorus theorem"<<endl;
}
return 0;
}