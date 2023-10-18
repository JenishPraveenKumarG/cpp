// Recursion 
 
// function calling itself until a specified condition is met

#include<bits/stdc++.h>
using namespace std;

/*void f(){
    cout << "1";
    f();
}
*/



/*void f(int count){
    if(count == 4)
        return;
    cout << count;
    count++;
    f(count);
}
int main(){
    int count = 0;
    f(count);
    return 0;

}*/




                                                    // BASIC PROBLEMS



//PRINT NAME RAJ N TIMES

/*void f(int i ,int n){    //initially i = 1
    if(i>n){
        return;
    }
    cout << "raj" << endl;
    f(i+1,n);


    int main(){
        int n; cin >>n
        f(1,n);
    }
} */

// print elements from 1 to n


/*void f(int i,int n){
    if(i >n) return;
    cout << i << " ";
    f(i+1,n);
}

// print elements from n to 1


void f(int n){
    if(n < 1) return;
    cout << n << " ";
    f(n-1);
}

int main(){
    int n;
    cin >> n;
    f(1,n);
    f(n);
}
*/

// print from n to 1

/*void f(int i , int n){
    if(i<1) return;
    cout << i << " ";
    f(i-1,n);
}

int main(){
    int n;
    cin >> n;
    f(n,n);
}
*/

// print 1 to n using backtracking


/*void f(int i , int n){
    if(i<1) return;
   
    f(i-1,n);
    cout <<i << endl;
}

int main(){
    int n;
    cin >> n;
    f(n,n);
}
*/

// recursive function

// sum of 1 to n numbers


/*void f(int i , int sum){
    if(i<1){
        cout << sum;
        return ;
    }
    f(i-1,sum+i);
}

int main(){
    int n; 
    cin >> n;
    f(n,0);
}
*/


// factorial of a number


/*int f(int n){
    if(n==1) return 1;
    return n * f(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << f(n);
}
*/


//

// Reverse an array using pointers

/*void f(int l, int r,int arr[]){
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    f(l+1,r-1,arr);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    f(0,n-1,arr);
    for(int i = 0; i<n; i++) cout << arr[i] << " ";

} */

//reverse an array using single element

/*void f(int i, int n , int arr[]){
    if(i >= n/2) return;
    swap(arr[i],arr[n-i-1]);
    f(i+1,n,arr);
}
int main(){
    int n;
    cin>> n;
    int arr[n];
    for (int i = 0; i<n; i++) cin >> arr[i];
    f(0,n,arr);
    for(int i = 0; i<n; i++) cout << arr[i] <<" ";
    return 0;
}
*/

/*bool f(int i , string &s,int n){
    if(i >= n/2) return true;
    if(s[i] != s[n-i-1]) return false;
    return f(i+1,s,n);
}
int main(){
    string s;
    cin >> s;
    int n =s.size();
    cout << f(0,s,n);

}*/


// fibonacci number

/*int f(int n){
    if(n <=1) return n;
    int last = f(n-1);
    int slast = f(n-2);
    return last+slast;
}
int main(){
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}
*/


// print the subsequences;

/*void f(int index, vector<int> &ds,int arr[], int n){
    if(index == n){
        for(auto itr : ds){
            cout << itr << " ";
        }
        if(ds.size() == 0) cout << "{}";
        cout <<endl;
        return;
    }
    // take or pick the particular index into the subsequence

    ds.push_back(arr[index]);
    f(index+1, ds, arr, n);
    ds.pop_back();

    //not pick or not take comdition , this element is not added

    f(index+1, ds, arr, n);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n;i++) cin >> arr[i];
    vector<int> ds;
    f(0,  ds, arr, n );
}
*/

//print the subsequence which matches the sum given bu user

/*void f(int index,vector<int> &ds,int s, int arr[], int sum, int n){
    if(index == n){
        if(s == sum){
        for(auto it : ds) cout << it << " ";
        cout << endl;
    }
    return;
    }
    ds.push_back(arr[index]);
    s+=arr[index];
    f(index+1,ds,s,arr,sum,n);
    ds.pop_back();
    s-=arr[index];
    f(index+1,ds,s,arr,sum,n);

}

int main(){
    int n,sum;
    cin >> n >> sum;
    vector<int> ds;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    f(0,ds,0,arr,sum,n);

} */


// print only 1 subsequence of a number which is sum is sum

/*bool f(int index,vector<int> &ds,int s, int arr[], int sum, int n){
    if(index == n){
        if(s == sum){
        for(auto it : ds) cout << it << " ";
        cout << endl;
        return true;
    }
    return false;
    }
    ds.push_back(arr[index]);
    s+=arr[index];
    if (f(index+1,ds,s,arr,sum,n) == true) return true;
    ds.pop_back();
    s-=arr[index];
    if (f(index+1,ds,s,arr,sum,n) == true) return true;
    return false;

}

int main(){
    int n,sum;
    cin >> n >> sum;
    vector<int> ds;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    f(0,ds,0,arr,sum,n);

} */


// subsequence with sum k without vector

int f(int index,int s, int arr[], int sum, int n){
    if(index == n){
        if(s == sum) return 1;
    else return 0;
    }
   
    s+=arr[index];
    int l = f(index+1,s,arr,sum,n);
    
    s-=arr[index];
    int r = f(index+1,s,arr,sum,n);
    return l+r;

}

int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 3;

    for(int i = 0; i<n; i++) cin >> arr[i];
    cout << f(0,0,arr,sum,n);

}


