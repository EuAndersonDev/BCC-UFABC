#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int P[N];
    for(int i = 0; i < N-1; i++){
        cin >> P[i];
    }
    
    sort(P, P + (N - 1));
    
    int result = N;
    
    for(int i = 0; i < N-1; i++){
        if(P[i] != i+1){
            result = i+1;
            break;
        }
    }
    cout << result << endl;    

    return 0;
}