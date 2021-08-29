//Reversing an Array

#include<iostream>

using namespace std;

int reverseArray(int a[],int n );
  
int main(){

int i,a[50],n;
cout<<"Enter the element of array:"<<endl;
cin>>n;

cout<<"Enter the array elements:"<<endl;
for(i=0;i<n;i++){
  cin>>a[i];
  cout<<a[i]<<" ,";
}
reverseArray(a,  n);
cout<<"The reverse array values are:"<<endl;
for(i=0;i<n;i++){
  cout<<" "<<a[i]<<" ";
}

return 0;
}
int reverseArray(int a[],int n){

int temp,start=0,end=n-1;
while(start<end){
  temp=a[start];
  a[start]=a[end];
  a[end]=temp;
  start++;
  end--;
}
}



  
