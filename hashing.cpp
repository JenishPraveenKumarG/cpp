/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }

    //pre calculation
    int hash[13]={0};
    for(int i = 0; i<n; i++){
        hash[arr[i]]+=1;
    }

    //getting elements input from the user

    int ques;
    cin >> ques;
    while(ques--){
        int number;
        cin >> number;
        cout <<"the hash number of the given number is" << hash[number] << endl;


    }
    return 0;
} 

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;


    // pre computation
    
    int hash[256] = {0};
    for(int i = 0; i<s.size();i++){
        hash[s[i]-'a']++;
    }

    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        cout << hash[c-'a'] << endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;


    // pre computation
    
    int hash[256] = {0};
    for(int i = 0; i<s.size();i++){
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        cout << hash[c] << endl;
    }
    return 0;
}

*/

// using map function as array ranges from 10 power 6 only

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    //pre compute
    //map<int,int> map;
    
    unordered_map<int, int>map;
    for(int i = 0; i<n; i++){
        map[arr[i]]++;
    }

    /*for(auto itr : map){
        cout << itr.first<<"-->"<<itr.second<<endl;
    }  */

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << map[number] << endl;
    }
    return 0;
}


