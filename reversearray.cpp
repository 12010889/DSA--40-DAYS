//#include<iostream>
//using namespace std;
//
//
//void reverseArray(int arr[],int start, int end){
//
//while(start < end){
//  int temp = arr[start];
//  arr[start]=arr[end];
//  arr[end]=temp;
//  start++;
//  end--;
//
//}
//
//}
//int main(){
// int arr[6];
// int n,size,start=0,end=n-1;
//
// cout<<"Enter the no of elements in array:"<<endl;
// cin>>n;
// for(int i=0;i<n;i++){
// cout<<"enter the array"<<endl;
// cin>>arr[i];
// cout<<arr[i]<<",";
// }
// 
//reverseArray(arr,0 ,n-1 );
//
//cout<<"Reversed array is"<<endl;
//return 0;
//}


#include<iostream>
using namespace std;

int main(){
	int arr[100],n;
	cout<<"Enter the size of Array:"<<endl;
    cin>>n;
    
cout<<"Enter the Array elements:"<<endl;
for(int i=0;i<n;i++){
  cin>>arr[i];
  cout<<arr[i]<<" , ";
}

int start=0, end=n-1,temp;

while(start<end){

temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;
start++;
end--;
}
cout<<"The reverse of array is:"<<endl;
for(int i=0;i<n;i++){
cout<<arr[i]<<"  ";
}
return 0;
}















