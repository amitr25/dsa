#include <iostream>
using namespace std;

//function defination
// int printhello(){
//     cout<<"hello world"<<endl;
//     return 3;
// }

// int main(){

//    //function call
//     int val= printhello();
//     cout<<val<<endl;



//     return 0; 


//}


//min of two numbers
// int min(int a,int b){ //parameters
//     if(a<b){
//         return a;
//     }else{
//         return b;
//     }
//     }

//     int main(){ 
        
//         cout<<min(5,9);//arguments
//         return 0;

//     }


/// caluculate the sum of numbers from 1 to n

// int sum(int n){
//     int sum=0; 
//     for(int i=1;i<=n;i++){
//         sum +=i;

//     }
//     return sum;
// }
// int main(){cout <<"total sum ="<<sum(5);
// return 0;}

////calculate sum of digits of a number
// int sumofdigits(int num){
//     int digsum=0;
//     while (num>0){
//         int lastdigit=num%10;
//         digsum +=lastdigit;
//         num=num/10;

//     }
//     return digsum;
// }
// int main(){
//     cout<<"sum of digits ="<<sumofdigits(41326);
//     return 0;
// }



////caluculate ncr binomial coefficient


int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial *=i;
    }
    return factorial;
}
int main(){
    int n,r;
    cin>>n>>r;
    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
    return 0;
}