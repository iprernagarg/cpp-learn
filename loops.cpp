#include<iostream>
using namespace std;
int main(){
    int a,b,s,n;
    a=1;
    b=1;
    s=0;
    cout<<"Enter the number of terms of fibonacci series:";
    cin>>n;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=1;i<=n-2;i++){
       s=a+b;
       cout<<s<<endl;
       a=b;
       b=s;
    }
    return 0;
}


#include<iostream>
using namespace std;
int main(){
    int n,num,check;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    num=2;
    check=0;
    while(num<n){
        if(n%num==0){
            check=check+1;
            break;
        }
        num=num+1;
    }
    if(check==0){
        cout<<"The number is prime.";
    
    }
    else cout<<"The number is not prime.";
    return 0;
}
//leet Q1281
#include<iostream>
using namespace std;
int main(){
   int num,sum,prod;
   cout<<"Enter an integer:";
   cin>>num;
   
   sum=0;
   prod=1;
   for(int i=1;num>0;i++){
    int dig =num%10;
    num= num/10;
    sum=sum+dig;
    prod=prod*dig;
   }
   cout<<"The sum= "<<sum<<endl;
   cout<<"The prod= "<<prod<<endl;
   cout<<"The diff= "<<abs(prod-sum)<<endl;
    return 0;
}

