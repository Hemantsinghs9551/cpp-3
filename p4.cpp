#include <iostream>
using namespace std;

int main(){
   int num;
   cout<<"enter the size of array: ";
   cin>>num;
   int *arr;
   arr=new int {num};
   cout<<"enter the array elements: "<< endl;  
   for(int i=0;i<num;++i)
   {
      cout<<"enter " <<i+1<< " elemnts : ";
      cin>>arr[i];
   }
   cout<<"your array is- "<< endl;
   for(int i=0;i<num;++i)
   {
      cout<<arr[i]<<" ";

   }
   return 0;
}