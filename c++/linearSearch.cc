#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Accept input numbers
    int N, value;
    cin >> N >> value;
    vector <int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    // linear search
    int found_id = -1;
    bool exist = false;
    for (int i = 0; i < N; i++){
        if(a[i] == value){
            found_id = i;
            exist = true;
            break;
        };
    };

    if(exist) cout << "Yes, index:" << found_id << endl;
    else cout << "No" << endl;
};

