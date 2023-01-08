#include <iostream>

using namespace std;

int main(){
    int n, x, score_1 {0}, score_2 {0}, y;
    cin >> n;
    for (; n > 0; n--){
        cin >> x >> y;
        if (x > y){
            score_1++;
        } else if (y > x){
            score_2++;
        }
    }
    if (score_1 > score_2){
        cout << "Mishka" << endl;
    } else if (score_2 > score_1) {
        cout << "Chris" << endl;
    } else {
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}
