#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    cout<<"The required array is : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
void printarray(char arr[],int size){
    cout<<"The required array is : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}
void Max(int arr[],int size){
    int max=arr[0];
    for (int i = 0; i < size; i++)
    {
       if (arr[i]>max){
        max=arr[i];
       }
    }
    cout<<"Maximum is: "<<max<<endl;
}
void Min(int arr[],int size){
    int min=arr[0];
    for (int i = 0; i < size; i++)
    {
       if (arr[i]<min){
        min=arr[i];
       }
    }
    cout<<"Minimum is: "<<min<<endl;
}
void inputArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element number "<<i+1<<endl;
        cin>>arr[i];
    }
    
}
void sum(int arr[],int size){
    int sum=0;
    for (int i = 0; i < size; i++){
    
        sum=sum+arr[i];
    }
    cout<<"The sum of the elements of array is: "<<sum<<endl;
}
void linsearch(int arr[],int size,int num){
    cout<<"Enter the number to be searched: "<<endl;
    cin>>num;
    int flag=0;
    for (int i = 0; i < size; i++)
    {
        if(num==arr[i]){
            cout<<"The number "<<arr[i]<< " is at index "<<i<<"."<<endl;
            flag=1;
            break;
        }

        
    }
    if(flag==0){
        cout<<"The number is not in the array."<<endl;
    }
    
}
void reverse(int arr[],int size){
    for (int i = 0 , j=size-1; i < size/2; i++,j--)
    {
      int  temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
    }
    cout<<"The required reversed array is : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    
}
void alternateSwap(int arr[],int size){
     for (int i = 0 ; i < size; i=i+2)
    {
       int j=i+1;
      int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
    }
    cout<<"The required alternately swapped array is : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl; 
}
void uniqueElement(int arr[],int size){
    int flag=0;
    for (int i = 0; i < size; i++){
        for (int j = 0; j <size; j++)
        {
            if(arr[i]==arr[j]&& i!=j){
                flag=0;
                
                break;
                
            }
            else{
                flag=1;
                
            }
            
        }
       if(flag==1){
            cout<<arr[i]<<" is an unique element"<<endl;
        }
       
        
    }
     
    
}
int unique(int arr[],int size){
    int ans=0;
for (int i = 0; i < size; i++)
{
   ans=ans^arr[i];
}
return ans;
}
int main(){
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int no;
    int num[size];
    inputArray(num,size);

    printArray(num,size);
    //char name[5]={'A','b','c','d','e'};
    //printarray(name,5);
   
    // Max(num,size);
    // Min(num,size);
    // sum(num,size);
    // linsearch(num,size,no);
    // reverse(num,size);
    
    // alternateSwap(num,size);
    //uniqueElement(num,size);
    cout<<unique(num,size);
    
    
    return 0;
}