#include <iostream>
#include <chrono>
#include "StringData.h"

using namespace std;

int linear_search(vector<string> container, string element) {
    for (int i = 0; i < container.size(); i++) {
        if (container[i] == element) {
            return i;
        }
    }
    return -1;
}

int binary_search(vector<string> container, string element) {
    int low = 0;
    int high = container.size() - 1;
    while (high >= low) {
        int mid = (low + high) / 2;
        if (container[mid] < element) {
            low = mid + 1;
        } else if (container[mid] > element) {
            high = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    //"not_here"
    auto begin_time_1 = chrono::system_clock::now();
    cout << "Linear search index: " << linear_search(getStringData(), "not_here") << endl;
    auto end_time_1 = chrono::system_clock::now();
    cout << "Total time for linear search 'not_here': " << end_time_1 - begin_time_1 << endl;
    auto begin_time_2 = chrono::system_clock::now();
    cout << "Binary search index: " << binary_search(getStringData(), "not_here") << endl;
    auto end_time_2 = chrono::system_clock::now();
    cout << "Total time for linear search 'not_here': " << end_time_2 - begin_time_2 << endl;

    //"mzzzz"
    auto begin_time_3 = chrono::system_clock::now();
    cout << "Linear search index: " << linear_search(getStringData(), "mzzzz") << endl;
    auto end_time_3 = chrono::system_clock::now();
    cout << "Total time for linear search 'mzzzz': " << end_time_3 - begin_time_3 << endl;
    auto begin_time_4 = chrono::system_clock::now();
    cout << "Binary search index: " << binary_search(getStringData(), "mzzzz") << endl;
    auto end_time_4 = chrono::system_clock::now();
    cout << "Total time for linear search 'mzzzz': " << end_time_4 - begin_time_4 << endl;

    //"aaaaa"
    auto begin_time_5 = chrono::system_clock::now();
    cout << "Linear search index: " << linear_search(getStringData(), "aaaaa") << endl;
    auto end_time_5 = chrono::system_clock::now();
    cout << "Total time for linear search 'aaaaa': " << end_time_5 - begin_time_5 << endl;
    auto begin_time_6 = chrono::system_clock::now();
    cout << "Binary search index: " << binary_search(getStringData(), "aaaaa") << endl;
    auto end_time_6 = chrono::system_clock::now();
    cout << "Total time for linear search 'aaaaa': " << end_time_6 - begin_time_6 << endl;

    return 0;
}
