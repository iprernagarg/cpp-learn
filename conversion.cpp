#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    i=0;
    float ans=0;
    if(n>=0){
    while(n!=0){
        int bit=n&1;
         ans= (bit*pow(10,i))+ans;
         n=n>>1;
         i++;
    }
}
else{
    unsigned int num=(1<<8)+n;
    while(num!=0){
        int bit=num&1;
         ans= (bit*pow(10,i))+ans;
         num=num>>1;
         i++;
    }
    
}
    
    cout<<"The binary representation of n is: "<<ans;
    return 0;
}



#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    float ans=0;
    i=0;
    while(n!=0){
        int digit =n%10;
        
        if(digit==1){
         ans=pow(2,i)+ans;
        }
       n=n/10;
        
        
        i++;
    }
    cout<<"Ans: "<<ans;
    return 0;
}