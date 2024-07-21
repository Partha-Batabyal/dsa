#include<iostream>
using namespace std;
void binarySearch(int size, int arr[],int key){
    int start = 0, end = size - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == key) {
            cout << "Element found at index: " << mid+1 << endl;
            return;
            break;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    cout << "Element not found in the array." << endl;

}

int main(){
    int size,key;
    cout << "Enter the size ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Enter the key to be searched ";
    cin >> key;
    binarySearch(size, arr,key);
}
