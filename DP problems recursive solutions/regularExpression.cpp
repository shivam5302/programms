#include<bits/stdc++.h>
using namespace std;
int regular(string str,string pattern){
    
    if(str[0]=='\0'&&pattern[0]=='\0'){
        return true;
    }
    
    if(pattern[0]=='*'){
        return regular(str,pattern.substr(1))||regular(str.substr(1),pattern);
    }
    if(pattern[0]=='?' || str[0]==pattern[0]){
        return regular(str.substr(1),pattern.substr(1));
    }
    
    return false;
    
    
}
int main(){
    
       string str = "baaabab"; 
     string pattern = "ba*a?";
    
    cout<<regular(str,pattern);
    
}
