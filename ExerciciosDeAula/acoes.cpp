#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    int t[n];
    for(int i = 0; i<n; i++){
        cin >> t[i];
    }
    
    int max, temp;
    temp = t[0] + t[1] + t[2] + t[3];
    max = temp;
    
    for(int i = 0; i<n; i++){
        temp = t[i] - t[i - 4];
        if(temp>max){
            max = temp;
        }
    }
    
    std::cout << max << std::endl;
    
    return 0;
}