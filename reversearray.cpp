#include<iostream>
using namespace std;
void reverse(int a[], int n){
    int start = 0;
    int end = n-1;
    int temp;
    while(start<end){
    // swap(a[start], a[end]);
    temp=a[start];
    a[start]=a[end];
    a[end]=temp;


    start++;
    end--;
    }
    // if (start<end){

    // }
}

void printarray(int a[],int n){
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

int main(){
int z;

int a[]={2,3,5,6,7,8};
int n = sizeof(a)/sizeof(a[0]);

printarray(a, n);
reverse(a, n);
cout<<"Reverse array : "<<endl;
printarray(a,n);

return 0;
}