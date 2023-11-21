// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int minGondolas(int n, int x, vector<int>& weights) {
//     sort(weights.begin(), weights.end());  

//     int left = 0;  
//     int right = n - 1;
//     int gondolaCount = 0;

//     while (left <= right) {
//         if (weights[left] + weights[right] <= x) {
//             left++;  
//         }
//         right--;  

//         gondolaCount++;  
//     }

//     return gondolaCount;
// }

// int main() {
//     int n, x;
//     cin >> n >> x;

//     vector<int> weights(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> weights[i];
//     }

//     int result = minGondolas(n, x, weights);
//     cout << result << endl;

//     return 0;
// }



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minG(int n, int x, vector<int>& w){
    sort(w.begin() , w.end());
    int left = 0;
    int right = n-1;
    int gondola = 0;

    while(left <= right){
        if (w[left] + w[right] <= x){
            left++;
        }
        right--;
        gondola++;
    }
    return gondola;
}

int main(){
    int n,x;
    cin>>n;
    cin>>x;
    vector<int> w(n);
    for (int i=0; i<n ; i++){
        cin>>w[i];
    }

    cout<<minG(n , x , w)<<endl;
    return 0;
}
