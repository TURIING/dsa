#include<iostream>

using namespace std;

int binary_search(int* arr, int left, int right, int find_value);

int main() {
    int arr[10] = {5, 14, 20, 30, 35, 40, 52, 64, 68, 80};
    int res = binary_search(arr, 0, 9, 68);
    cout << res << endl;
}

int binary_search(int* arr, int left, int right, int find_value) {
    int mid = (left + right) / 2;
    int mid_value = arr[mid];

    // 未能找到
    if (left > right) return -1;


    if (find_value > mid_value) {
        return binary_search(arr, mid+1, right, find_value);
    } else if (find_value < mid_value) {
        return binary_search(arr, left, mid-1, find_value);
    } else {
        return mid;
    }
}