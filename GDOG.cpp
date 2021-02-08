#include <iostream>
using namespace std;

int main() {
    int N, K, T;
    cin >> T;
    while(T--){
        int count = 0;
        cin >> N >> K;
        for(int j = 1; j<=K; j++){
            if(N%j > count){
                count = N%j;
            }
        }
        cout << count << "\n";
    }
}