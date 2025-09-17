#include<iostream>
using namespace std;
void binarySearch(int arr[],int size,int key){
    int a=0;
    int b=size-1;
    int mid=a+((b-a)/2);
    while(a<=b){
        if(arr[mid]==key){
            cout<<"The number is present at "<<mid<<" index of the array."<<endl;
            return;
        }
        else if(arr[mid]<key) {
           a=mid+1;
        }
        else{
            b=mid-1;
        }
        mid=a+((b-a)/2);
    }
    
        cout<<"Element not found"<<endl;
    
}
int main(){
    int num[10]={2,4,6,8,10,12,14,16,18,20};
    binarySearch(num,10,16);
    return 0;
}