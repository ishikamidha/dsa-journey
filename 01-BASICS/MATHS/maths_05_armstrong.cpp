#include<bits/stdc++.h>
using namespace std;
bool isArmstrong(int n){
    int sum=0;
    
    int dup=n;
    int count = 0;
    int temp = n;
    while(temp > 0) {
        count++;
        temp /= 10;
    }
    while(n > 0){
        int last_digit = n % 10;
       
         sum=sum+round(pow(last_digit,count));
         n=n/10;

    }
   
    return (sum == dup);
    
}
int main(){
int t;
    cin>>t;
   for(int i=0;i<t;i++){
       int n;
       cin>>n;
       isArmstrong(n);
       if(isArmstrong(n)) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
    return 0;
       
}