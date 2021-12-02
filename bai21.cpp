#include<iostream>
#include<math.h>
using namespace std ; 
int check(int n){
    int dem ; 
    for(int i=2;i<n;i++){
      if(n%i==0) return 0 ;
    }
    return 1 ; 
}
int main(){
      int n ;
      cin>>n ; 
     for(int i=2;i<=n;i++){
               if(check(i)){
                      if(check(n-i)){
                             cout<<i<<" "<<n-i<<endl; 
                             return 0 ;        
                      }
               }
     }
}