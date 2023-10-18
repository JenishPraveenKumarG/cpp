// largest element in an arry

// time complexity O(n log(n))
// brute force approach
/*
#include<bits/stdc++.h>
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
    cout << arr[n-1];
    return 0;
} */





// better solution to find largest element in an array

// time cmplexity = O(n)

/*int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    int largest = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << largest;
    return 0;
} */


// find the second largest element in an array

// brute force approach          

// time complexity = O(nlog(n)) + O(n)
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    // sort the array

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


    int largest = arr[n-1];
    for(int i = n-2; i >=0; i--){
        if(arr[i]!= largest){
            int slargest = arr[i];
            cout << slargest;
            break;
        }
    }
} */


// better solution to find second largest element

// time complexity = O(n^2)

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int largest = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    int slargest = -1;
    for(int i = 0; i <n; i++){
        if(arr[i] > slargest && arr[i] != largest){
            slargest = arr[i];
        }
    }
    cout << slargest;
}



// optimal solution to find the second largest and seocond minimum number

// time complexity = O(n)

#include<bits/stdc++.h>
using namespace std;
void secondlargest(int arr[], int n){
    int largest = arr[0];
    int slargest = -1;
    for(int i = 1; i <n; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    cout<< slargest << " ";
}
void secondsmallest(int arr[], int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i] < smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < smallest && arr[i]!= smallest){
            ssmallest = arr[i];
        }
    }
    cout<< ssmallest;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    secondlargest(arr,n);
    secondsmallest(arr,n);
   return 0;
} */



// check array is sorted or not

//time complexity = O(n)

/* #include<bits/stdc++.h>
using namespace std;
int checksorted(int arr[], int n){
    for(int i = 1; i<n; i++){
        if(arr[i]>=arr[i-1]){
        }
        else{
           return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i= 0; i<n; i++){
        cin >> arr[i];
    }
    //cout << boolalpha << checksorted(arr,n); // it returns 1 or 0 boolalpha will convert it but it is not working here perfectly
    if (checksorted(arr, n)) {
        cout << "true";
    } else {
        cout << "false";
    }
   
}*/

// Removce duplicates from the sorted array

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    set <int> st;
    for(int i = 0; i<n; i++){
        st.insert(arr[i]);
    }
    for(auto itr : st){
        cout << itr <<" "; 
    }
    return 0;      // time complexity is O(n log(n))

}*/

/* optimal solution to remove duplicates from the sorted array

#include<bits/stdc++.h>
using namespace std;
int remduplicates(int arr[], int n){
    int i = 0;
    for(int j = 1;j<n; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){  // optimal; solution which is used to remove duplicates from the array
             // time complexioty = O(n) space complexity = O(1)
    int n;
    cin >>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int newLength = remduplicates(arr, n);
    cout << newLength << endl;

    // Print the array after removing duplicates
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}*/



// left rotate an array 

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int temp = arr[0];
    for(int i = 1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    for(int i = 0; i<n; i++){
        cout << arr[i] <<" ";
    }
    return 0;
} */


// left rotate elements in an array by d places

//time complexity = O(n+d)
// spacxe complexity = O(d)
/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int d;
    cin >> d;
    
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for(int i = d; i<n; i++){
        arr[i-d] = arr[i];
    }
    int j= 0;
    for(int i = n-d;i<n; i++){
        arr[i] = temp[j];
        j++;
    }
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
*/



// optimal code with time complexity O(2n)
// space complexiy = O(1)

#include<bits/stdc++.h>
using namespace std;
void leftrotate(int arr[], int n, int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main(){
    int n;
    std::cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int d;
    cin >> d;
    leftrotate(arr,n,d);
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;

}