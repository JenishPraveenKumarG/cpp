#include<bits/stdc++.h>
using namespace std;

   /* string s;
    getline(cin,s);
    cout << s; 
     for(int i =0; i <=10; i++){
        cout << i << endl;
    }
    

   // pattern

   for(int i = 0; i<4;i++){
    for(int j = 0;j<4;j++){
        cout <<"* ";
    }
    cout << endl;
   } 

    int n = 4;
    for (int i = 0; i < n; i++){
        for( int j = 0; j<=i ; j++){
            cout << "*";
        }
        cout << endl;
    }

    int n = 9;
    for(int i = 1; i <n+1; i++){
        for(int j = 1; j <= i; j++){
            cout << j ;
        }
        cout << endl;
    } */

    /*int n = 10;
    for(int i = 1;i <n;i++){
        for (int j = 1; j<n-i+1; j++){
            cout << j; 
        }
        cout << endl;
    }*/
    
    /*int n = 7;
    for(int i = 1; i <n+1; i++){
        for(int j = 1; j <= i; j++){
            cout << i ;
        }
        cout << endl;
    }*/
    //int n = 6;
    /*for(int i =0; i < n; i++){
        //for spacing
        for(int j =0; j < n-i-1 ; j++){
            cout << " ";
        }
        //for printing '*'
        for(int j = 0; j<2*i+1; j++){
            cout << "*";
        }
        //for spacing
        for(int j =0; j < n-i-1 ; j++){
            cout << " ";
        }
        cout << endl;
    }*/
    /*for(int i =0; i < n; i++){
        //for spacing
        for(int j =0; j < i ; j++){
            cout << " ";
        }
        //for printing '*'
        for(int j = 0; j<2*n - (2*i+1); j++){
            cout << "*";
        }
        //for spacing
        for(int j =0; j < i ; j++){
            cout << " ";
        }
        cout << endl;
    }*/
    /*for(int i = 1; i<=2*n-1; i++){
        int stars = i;
        if(i > n) stars = 2*n - i;
        for(int j = 1; j <=stars; j++){
            cout << "*";
        }
        cout << endl;
    }
    int start = 1;
    for(int i = 0; i<n; i++){
        if(i%2 == 0) start = 1;
        else start = 0;
        for(int j = 0;j<=i ; j++){
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
    int n = 7789;
    int lastdigit;
    cout << "original number " <<n << endl;
    cout << "after reversing ";

    while(n>0){
        lastdigit = n%10;
        cout << lastdigit ;
        n = n/10;

    }  
    void f(int count){
      if(count == 4)
        return;
      cout << count;
      count++;
      f(count);
}
int main(){
    int count = 0;
    f(count);
    return 0; */

//}
void f(int i , int n){
    if(i<1) return;
   
    f(i-1,n);
    cout <<i << endl;
}

int main(){
    int n;
    cin >> n;
    f(n,n);
}