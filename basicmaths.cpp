
    //basic maths concept
#include<bits/stdc++.h>
using namespace std;
    
    //1. extraction of digits

int main(){

    /*int n = 7789;
    int lastdigit;
    cout << "original number " <<n << endl;
    cout << "after reversing ";

    while(n>0){
        lastdigit = n%10;
        cout << lastdigit;
        n = n/10;

    }  
    
    // we can also use

    //log10(n)+1 to find the total occurrance of a number in a string  */

    //reverse a numnber
    /*int n,lastdigit;
    int rev = 0;
    cin >> n;
    while(n>0){
        lastdigit = n%10;
        n=n/10;
        rev  = (rev * 10) + lastdigit;
    }
    cout<< rev;*/

    // palindrome or not

    /*int rev = 0;
    int n;
    cin >> n;
    int dup = n;
    while(n>0){
        int lastdigit = n%10;
        n=n/10;
        rev  = (rev * 10) + lastdigit;
    }
    if(dup == rev) cout << "true";
    else cout<< "false";
    */

   //armstrong number

    /*int n,sum = 0;
    cin >> n;
    int dup = n;
    while(n>0){
        int lastdigit = n%10;
        sum +=(lastdigit * lastdigit * lastdigit);
        n=n/10;   
    }
    cout << sum <<endl;
    if(sum == dup) cout <<"true";
    else cout << "false";
    */



    // divisor

    // print all the devisor of specified number

    /*int n;
    cin >> n;
    for(int i =1; i<=n; i++){
        if(n%i==0){
            cout<<i <<endl;
        }
    }*/

    /*int n;
    cin >> n;
    for(int i = 1; i<=sqrt(n);i++){
        if(n%i == 0){
            cout << i <<" ";
            if((n/i)!= 0){
                cout << (n/i) <<" ";
            }
        }
    }*/


    // as we need to sort the factors we use list

    /*int n;
    cin >>n;
    vector<int> ls;
    for(int i = 1 ; i*i<=n;i++){
    //for(int i = 1; i<=sqrt(n); i++){
        if(n%i == 0){
            ls.push_back(i);
            if((n/i)!= i){
                ls.push_back(n/i);
            }
        }

    }
    sort(ls.begin(),ls.end());
    for(auto itr : ls) cout <<itr <<" ";  */
    
    
    // prime number or not
    
    /*int counter = 0;
    int n;
    cin >> n;
    for(int i = 1; i*i<=n; i++){
        if(n%i == 0){
            counter++;
            if((n/i)!=0) counter++;   //if((n/i)!=i) counter++; can do this too
        if(counter == 2){
            cout << "prime";
        }
        else{
            cout << "not a prime";
        }
        }
    }
    return 0; */


    // gcd of a number


    int a , b;
    cin >> a >>b;
    while(a > 0 && b>0){
        if(a > b) a = a%b;
        else b = b%a;
    }
    if (a!=0) cout << a;
    else cout <<b; 


}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
