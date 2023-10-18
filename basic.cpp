#include<bits/stdc++.h>
using namespace std;

//int main(){
    //int 

    //int x = 10; 
    //int a;

    //long

    //long y = 20;

    //cin>>a;
    //cout<<a;

    //long long z = 1500000000;

    // float,double

    //float b = 10;
    //cout<<b;

    //string and getline

    //for 2 strings we have to do like this which is bull shit
    
    /*string s1, s2;
    cin >>s1 >>s2;
    cout <<s1 <<" j" <<s2;
    string s ="hii everyone";
    cout << s;
    */

    // for this like time we use getline()
    //syntax will be getline(cin,variable)

    /*string s;
    getline(cin,s);
    cout << s;
    */

    //character - used to store single characters

    //char c = 'h';
    //cout << c;
    


    //if else statement


    //write a program that takes input as age and print you are adult or not

    /*int age;
    cin >> age;
    if(age >=18){
       cout << "You are an adult";
    }
    else{
        cout <<"You are not an adult";
    }
    */

    //else if can also used based on the scenario

    //A school has the following scenario
    
    /*a.below 25 - fail
    b.25 - 44 - E
    c.45 - 49 - D
    d.50 - 59 - C
    e.60 - 79 - B
    f.80 - 100 - A 
    ask the user marl and print the grade*/

    /*int marks;
    cin >> marks;
    if(marks < 25){
        cout << "F";
    }
    else if(marks >= 25 && marks <=44){
        cout << "E";
    }
    else if(marks >= 45 && marks <=49){
        cout << "D";
    }
    else if(marks >= 50 && marks <=59){
        cout << "C";
    }
    else if(marks >= 60 && marks <=79){
        cout << "B";
    }
    else{
        cout << "A";
    } */

    /*Take the age from the user and then decide accordingly

    If age < 18 print not eligible for job

    If age >= 18  print eligble for job 
    
    If age >= 55 and age <= 57 printt eligible for job, but retirement soon

    age > 57 print retirement */

    /*int age;
    cin >> age;
    if(age < 18){
        cout << "not eligible for job";
    }
    else if (age >= 18 && age <= 54){
        cout << "eligible for job";
    }
    else if (age >= 55 && age <= 57){
        cout << "eligible for job but retirment soon";
    }
    else{
        cout << "retirement";
    }
    */

   //switch stament

   // for 1 print monday for 2 print tuesday

   /*int day;
   cin >> day;
   switch (day)
   {
    case 1:
       cout << "monday";
       break;
    case 2:
       cout << "tuesday";
       break;
   
   default:
       cout << "invalid input";
       break;
   } */

   //ARRAYS basic
    
    // 1D array
    /**
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[4] << endl;
    arr[4] += 10;
    cout << arr[4];
    */

   //2D array

   /*
   int arr[3][5];

   arr[2][4] = 10;
   cout << arr[2][4];

   */
    

    //Strings
    
    /*
    string s = "jenish";
    cout << s[2] << endl;
     

    int len=s.size();
    cout << s[len-1] << endl;
    s[len-1] = 'a';
    cout << s[len-1];
    */
    
    // for loop
    
    /*
    for(int i =1; i <=10; i++){
        cout << "jenish" << endl;
    }
    */
    
    // while loop

    /*int i =1;
    while(i<=10){
        cout << 'h' << endl;
        i++;
    }
    */

   //same do fo do wile loop

   //functions
/*void printname(string name){
        cout << "hiiiiii  " << name <<endl;
    }
int main(){
    string s1;
    cin >> s1;
    printname(s1);

    string s2;
    cin >> s2;
    printname(s2);

    return 0;

} */
  // adding 2 numbers

/*void add(int a, int b){
    int sum;
    sum = a+b;
    cout << "the sum is "<< sum;
}


int main(){
    int a,b;
    cin >> a;
    cin >> b;
    add(a,b);
    return 0;
}
*/

// min max inbuilt functions

/*int main(){
    int a,b;
    cin >> a >>b;
    int minimum = min(a,b);
    int maximum = max(a,b);
    cout << minimum;
    cout << maximum;
}
*/


/* printing pattern ****
                    ****
                    ****
                    **** */


/*int main(){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j<4 ; j++){
            cout << "*";
        }
        cout << endl;
    }
    
}
*/


 // lets use a function and print the pattern

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
    printl10(n);

    
}
