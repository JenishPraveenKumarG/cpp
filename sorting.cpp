// selection sort

/*#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[], int n){
    for(int i = 0;i<=n-2;i++){
        int mini = i;
        for(int j = i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;

    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0;i<n;i++) cin >> arr[i];
    selectionsort(arr, n);
    for(int i =0;i<n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}   */


// bubble sort

/*#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n){
    // for time complexity optimization
    int didswap = 0;
    for(int i = n-1; i >=0; i--){
        for(int j = 0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didswap = 1;
            }
        }
        if(didswap == 0){
            break;
        }
        cout << "run\n";
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    bubblesort(arr,n);
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
} */

// insertion sort 

/*#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[] , int n){
    for(int i = 0; i<=n-1;i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    insertionsort(arr,n);
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;

} 

// merge sort

#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    //[low...mid]
    //[mid+1...high]   // these are the two arrays which has to be merged
    int left = low;
    int right = mid+1;
    while(left<=mid && right <=high){
        if(arr[left]<=arr[right]){    
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}
void mergesort(vector<int> &arr, int low , int high){
    if (low >= high) return;
    int mid = (low + high) / 2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
int main(){
    int n; 
    cin >> n;
    int a;
    vector<int> arr;
    int low = 0;
    int high = n-1;
    for(int i = 0;i<n;i++){
        cin >> a;
        arr.push_back(a);
    }
    mergesort(arr,0,n-1);
} */

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low ;
    int j = high;

    while (i <= j) {
        while (i <= j && arr[i] <= pivot) {
            i++;
        }
        while (j >= i && arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int start, int end) {
    if (start < end) {
        int pIndex = partition(arr, start, end);
        quickSort(arr, start, pIndex - 1);
        quickSort(arr, pIndex + 1, end);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

