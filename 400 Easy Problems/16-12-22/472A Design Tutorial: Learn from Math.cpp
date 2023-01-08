#include <iostream>

using namespace std;

bool check_comp(int num){
    if (num <= 1){
        return false;
    } else {
        for (int i = 2; i <= num / 2; i++){
            if (num % i == 0){
                return true;
            }
        }
        return false;
    }
}

int main(){
    int n;
    cin >> n;
    int comp_1 {n - (n % 10)}, comp_2 {n % 10};
    while (!check_comp(comp_1) or !check_comp(comp_2)){
        comp_1--;
        comp_2++;
    }
    cout << comp_2 << " " << comp_1 << endl;
    return 0;
}
