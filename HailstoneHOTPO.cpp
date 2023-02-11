#include <iostream>
#include <string>

int t,k;

int function(int x){
    
    if(x == 1) return 1;
    
    if(x%2==0) res=max(res,function(x/2));
    
    else res=max(res,function(3*x+1));
    
    return res;
}
int main(){
    
    std::cin>>t;
    
    while(t--){
    
        int n;

        std::cin >> k >>n;
        
        std::cout <<k <<' '<< function(n)<< std::endl;
    
    }
    
    return 0;
}



