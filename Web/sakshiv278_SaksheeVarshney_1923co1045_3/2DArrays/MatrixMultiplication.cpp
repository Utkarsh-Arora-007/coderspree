#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,m1,n2,m2;
    cin>>n1;
    cin>>m1;
    int a1[n1][m1];
    for(int i=0;i<n1;i++){
         for(int j=0;j<m1;j++){
             cin>>a1[i][j];
         }
    }  
    cin>>n2;
    cin>>m2;
    int a2[n2][m2];
    for(int i=0;i<n2;i++){
         for(int j=0;j<m2;j++){
             cin>>a2[i][j];
         }
    } 
    int o[n1][m2]={0};
    if(n2!=m1){
      cout<<"Invalid input"; 
    }
    else{
       for(int i=0;i<n1;i++){
         for(int j=0;j<m2;j++){
             for(int k=0;k<m1;k++){
                 o[i][j]+=a1[i][k]*a2[k][j];
             }
         }
    }
    
    for(int i=0;i<n1;i++){
         for(int j=0;j<m2;j++){
             cout<<o[i][j]<<" ";
         }
        cout<<endl;
    }
    }
}
