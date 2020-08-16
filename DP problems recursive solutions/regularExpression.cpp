#include<bits/stdc++.h>
using namespace std;
int regular(string str,string pattern,int m,int n){
    
    if(n==0&&m==0){
        return true;
    }
    else if(n==0||m==0) return false;
    
    if(pattern[n-1]=='*'){
        return regular(str,pattern,m,n-1)||regular(str,pattern,m-1,n);
    }
    if(pattern[n-1]=='?' || str[m-1]==pattern[n-1]){
        return regular(str,pattern,m-1,n-1);
    }
    
    return false;
    
    
}
int main(){
    
       string str = "baaabab"; 
     string pattern = "b*a*aa*bab";
    
    cout<<regular(str,pattern,str.size(),pattern.size());
    
}
