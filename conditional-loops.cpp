#include <iostream>
using namespace std;

int main(){
    // int a;
    // cout<<"enter your number"<<endl;
    // cin >>a;
    
    // if(a>=0){
    //     cout<<"your number is postive"<<endl;
    // }
    // else{cout<<"your number is negative"<<endl;
    // }

   
    // int age; 
    // cout<<"enter age:"<<endl;
    // cin>>age;
    // if(age>=18){
    //     cout<<"you can vote"<<endl;

    // }else{
    //     cout<<"you can't vote"<<endl;
    // }
    // return 0;

    ////even or odd
    // int n;
    // cout<<"enter your number"<<endl;
    // cin>>n;

    // if(n%2==0){
    //     cout<<"your number is even"<<endl;
    // }else{cout<<"your number is odd"<<endl;}
    // return 0;
    
    ////if else ladder
    // int marks;
    // cout<<"enter marks"<<endl;
    // cin>> marks;
    // if(marks>=90){
    //     cout<<"grade A"<<endl;
    // }else if(marks<90 && marks>=80){
    //     cout<<"grade B"<<endl;

    // }else{
    //     cout<<"grade C"<<endl;
    // }


 ////loops
    // int count=1;
    // while(count<=100){
    //     cout<<count <<"  ";
    //     count++;
    // }

  ///for loop
    // int n=10;
    // int sum= 0;
   
    //  for(int i=1;i<=n;i++){
        
    //     sum=sum+i;
        
    //  }
    //  cout<<sum<<" ";

    // int n=10;
    // int sum=0;
    // int i=1;
    // while(i<=n){
    //     sum +=i;
    //     i++;
    //     if(i==5){
    //         break;
    //     }
        
    // }
    // cout<<sum<<endl;

//sum of all odd numbers from 1 to n
    // int n=9;
    // int oddSum=0;

    // for(int i=1; i<=n;i++){
    //     if(i%2!=0){
    //         oddSum+=i;
    //     }
    // }
    // cout<<oddSum<<endl;
     
////sum of all even numbers from 1 to n
    // int n=10;
    // int evenSum=0;

    // for(int i=1; i<=n;i++){
    //         if(i%2==0){
    //             evenSum+=i;
    //         }
    //     }
    //     cout<<evenSum<<endl;


 ////check no is prime or not
 
    int n=17;
    bool isprime=true;

    for(int i=2; i<=n-1;i++){
        if(n%i==0){
            isprime=false;
            break;

        }
    }
    if(isprime ==true){
        cout<<"prime number"<<endl;

    }else{
        cout<<"not prime number"<<endl;
    }
    return 0;
 
    

    
    }


