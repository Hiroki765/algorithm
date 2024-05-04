#include <iostream>
#include <vector>
// using namespace std;

int main(){
    int N, W;
    std::cin >> N >> W;
    std::vector<int> a(N);
    std::cin >> a[N];
    // for (int i = 0; i < N; ++i) cin >> va[i];

    // // bit moves over the entire subset of 2 to the power of N
    // bool exist = false;
    // for(int bit = 0; bit < (1 << N); bit++){
    //     int sum = 0;
    //     for (int i = 0; i < N; i++){
    //         // 
    //         if(bit & (1 << i)){
    //             sum += a[i];
    //         }
    //     }

    //     //
    //     if(sum == W) exist = true;
    // }
    
    // if(exist) cout << "Yes" << endl;
    // else cout << "NO" << endl; 
    return 0;
}