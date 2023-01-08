#include <iostream>

using namespace std;

int main(){
    int n, r, result {1}, x {2}, k;
    cin >> n >> r;
    k = n;
    while ((n % 10 != r) and (n % 10 != 0)){
        result++;
        n = k*x;
        x++;
    }
    cout << result << endl;
    return 0;
}
