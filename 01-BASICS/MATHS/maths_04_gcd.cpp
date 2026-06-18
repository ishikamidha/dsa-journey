#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b) a= a%b;
        else b=b%a;
    }
    if (a==0) return b;
    return a;}

int main(){
   int T;
   cin>>T;
   for(int i=1;i<=T;i++){
    int a,b;
    cin >>a>>b;
    cout<<gcd(a,b)<<endl;

   }
}