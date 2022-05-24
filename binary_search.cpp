#include <iostream>
using namespace std;

int binary_search(int sorted[]){
    int find, start = 0, end = sizeof(sorted), mid;
    cin>>find;
    while (start < end) {
        mid = (start = end) / 2;
        if (sorted[mid] == find) {
            return mid;
        }
        else if (sorted[mid] < find) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
}