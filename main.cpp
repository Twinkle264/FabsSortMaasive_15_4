#include <iostream>
#include <vector>

using namespace std;

vector<int> twoPointSort(vector<int> vec) {

    vector<int> numbs;
    int positivePointer = 0;
    while (positivePointer < vec.size() && vec[positivePointer] < 0) ++positivePointer;
    int negativePointer = positivePointer - 1;

    while (negativePointer >= 0 || positivePointer < vec.size()) {
        if (vec[positivePointer] > -vec[negativePointer] || positivePointer == vec.size()){
            numbs.push_back(vec[negativePointer]);
            --negativePointer;
        }else {
            numbs.push_back(vec[positivePointer]);
            ++positivePointer;
        }
    }
    return numbs;
}

int main() {
    vector<int> vec = {-100, -50, -5, 1, 10, 15};

    vec = twoPointSort(vec);

    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << ' ';
    }
    return 0;
}
