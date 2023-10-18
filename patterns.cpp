#include<bits/stdc++.h>
using namespace std;
void printl(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<n ; j++){
            cout << "*";
        }
        cout << endl;
    }
    
}
void printl2(int n){
    for (int i = 0; i < n; i++){
        for( int j = 0; j<=i ; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void printl3(int n){
    for(int i = 1; i <n+1; i++){
        for(int j = 1; j <= i; j++){
            cout << j ;
        }
        cout << endl;
    }
}
void printl4(int n){
    for(int i = 1;i <n;i++){
        for (int j = 1; j<n-i+1; j++){
            cout << j; 
        }
        cout << endl;
    }
}
void printl5(int n){
    for(int i = 1; i <n+1; i++){
        for(int j = 1; j <= i; j++){
            cout << i ;
        }
        cout << endl;
    }
}
void printl6(int n){
    for(int i =0; i < n; i++){
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
    }
     
}
void printl7(int n){
    for(int i =0; i < n; i++){
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
    }
     
}
void printl8(int n){
    for(int i = 1; i<=2*n-1; i++){
        int stars = i;
        if(i > n) stars = 2*n - i;
        for(int j = 1; j <=stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void printl9(int n){
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
}
void printl10(int n){
    int space = 2*(n-1);
    for(int i = 1; i <= n ;i++){

        //printing 1st number

        for(int j = 1; j<=i; j++){
            cout << j;
        }

        // space 

        for(int j = 1; j<=space; j++){
            cout << " ";
        }

        //for printing numbers again

        for(int j = i;j>=1;j--){
            cout << j;
        }
        cout << endl;
        space-=2;
    }
}
void printl11(int n){
    int num = 1;
    for(int i = 1; i<= n; i++){
        for(int j = 1;j <=i; j++){
            cout <<num <<" ";
            num+=1;
        }
        cout << endl;
    }
}
void printl12(int n){
    for(int i = 0; i <=n; i++){
        for(char ch ='A'; ch <= 'A'+i ; ch++){
            cout <<ch << " ";
        }
        cout << endl;
    }
}
void printl13(int n){
    for(int i = 0; i <n; i++){
       // logic is a+(n-1)
       for(char ch = 'A';ch <='A' + (n-i-1); ch++){
        cout << ch <<" ";
       }
       cout << endl;
    }
}
void printl14(int n){
    for(int i = 0; i<=n ; i++){
       char ch = 'A' + i;
       for(int j = 0; j<i ; j++){
        cout << ch << " ";
       }
       cout << endl;
    }
}
void printl15(int n){
    
    for(int i = 0; i<=n; i++){
        //for spacing
        for(int j =0; j < n-i-1 ; j++){
            cout << " ";
        }
        //for printing '*'
        char ch= 'A';
        int breakpoint = (2*i+1)/ 2;
        for(int j = 0; j<2*i+1; j++){
            cout << ch;
             if( j <= breakpoint) ch++;
             else ch--;
        }
        //for spacing
        for(int j =0; j < n-i-1 ; j++){
            cout <<" ";
        }
        cout << endl;
    }
    
}
void printl16(int n){
    for(int i = 0; i< n; i++){
        for(char ch = 'E'-i;ch <='E';ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void printl17(int n){
    int inis = 0;
    for(int i = 0; i<=n; i++){
        //stars
        for(int j = 1; j <=n-i; j++){
            cout << "*";
        }
        //spaces
        for(int j = 0; j<inis; j++){
            cout << " ";
        }
        //stars
        for(int j = 1; j <=n-i ; j++){
            cout << "*";
        }
        inis+=2; // incrementing by 2
        cout << endl;
    }
        //  for downward symmwtric
    
    inis = 2*n-2;
    for(int i = 0; i<=n; i++){
        //stars
        for(int j = 1; j <=i; j++){
            cout << "*";
        }
        //spaces
        for(int j = 0; j<=inis; j++){
            cout << " ";
        }
       

        //stars
        for(int j = 1; j <=i ; j++){
            cout << "*";
        }
        inis= inis-2; // incrementing by 2
        cout << endl;
       
    }
}
void printl18(int n){
    int spaces=2*n-2;
    for(int i = 1 ; i<=2*n-1;i++){
        int stars =i;
        if(i>n) stars = 2*n-i;
        // stars
        for(int j = 1;j <=stars;j++){
            cout <<"*";
        }
        //space
        for(int j = 1;j<=spaces;j++){
             cout <<" ";
        }



        //stars
        for(int j = 1;j <=stars;j++){
            cout <<"*";
        }
        cout << endl;
        if(i<n) spaces-=2;
        else spaces+=2;
    }
}
void printl19(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}
void printl20(int n){
    for(int i = 0 ; i <2*n-1;i++){
        for(int j = 0; j<2*n-1;j++){
            int top = i;
            int left = j;
            int down = (2*n-2)-j;
            int right = (2*n-2)-i;
            cout << (n - min(min(top,down),min(left,right)));
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    /*printl(n);
    printl2(n);
    printl3(n);
    printl4(n);
    printl5(n);
    printl6(n);
    printl7(n); */
    //printl8(n);
    //printl9(n);
    //printl10(n);
    //printl11(n);
    //printl12(n);
    //printl13(n);
    //printl15(n);
    //printl16(n);
    //printl17(n);
    //printl18(n);
    //printl19(n);
    printl20(n);
    

    
}
