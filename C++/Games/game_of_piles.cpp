// question link (code chef)- https://www.codechef.com/problems/GAMEOFPILES1

#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl "\n"


int main(){
     int t;
     cin>>t;
     for(int i=0;i<t;i++){
          int n,sum=0,x=0;
          cin>>n;
          int arr[n];
          for(int j=0;j<n;j++){
               cin>>arr[j];
               sum+=arr[j];
               if(arr[j]==1){
                    x=1;
               }
          }
          if(sum%2==0&&x==0){
               cout<<"chefina"<<endl;
          }else 
          cout<<"chef"<<endl;
     }
     return 0;
}
