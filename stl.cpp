/*#include<stdio.h>
#include<math.h>    // time waste in this type of importing
#include<string.h> */

#include<bits/stdc++.h> // it will import all the libraries
using namespace std; // important one 

//functions

/*void print(){
    cout << "raj"; //no return value....only we can print
}

int add (int a, int b){
    return a+b; //returns a value
}
int main(){
    print();
    int s = add(1,5);
    cout <<endl << s;
    return 0 ;
}*/


// algorithms containers functions iterators

void explainingpairs(){
    pair<int , int> p= {1,2}; //normal pair
    pair<int, pair<int , int>> p1 = {1,{2,3}}; //nested pair
    pair<int , int> arr[] = {{1,2},{2,3},{3,4},{4,5}};
    cout << p.first <<" " <<p.second << endl;
    cout << p1.first <<" " <<p1.second.first << " " <<p1. second.second <<endl;
    cout << arr[1].second <<" " << arr[3].first;
}

//vector


//void explainingvectors(){
    /*vector<int> v; //empty container
    v.push_back(1); //insert value in it(push)
    v.emplace_back(2); //increase size and insert value in it(push) faster than pushback

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(2,3);

    vector<int> v(5,100); //size 5 values of (100,100,100,100,100)

    vector<int> v1(5); // size 5 with no vales or garbage values based on the compiler // size will be increased after 5th elemnt too... 5 to 6

    vector<int> v2(v); //coping v container value to v2 

    //accessing values

    cout << v[0]; //similar like array
    */

    //iterator method
    /*vector<int> v(5,100);

    vector<int> :: iterator it = v.begin(); // points the starting element
    cout << *(it) << " ";

    // other iterators

    vector<int> :: iterator a = v.end(); // end menas after the last that why we are taking end -1 (a--)
    a--;
    cout << *(a);*/
    
    // iterating vector using for loop
    /*
    vector<int> v; //empty container
    v.push_back(1); //insert value in it(push)
    v.emplace_back(2);
    v.push_back(3); //insert value in it(push)
    v.emplace_back(4);
    for(vector<int> :: iterator it = v.begin(); it != v.end(); it++){ 
        cout << *(it) << " ";
    }
    */

   // here comes the easy method for accessing the elements

   //using auto
    /*vector<int> v; //empty container
    v.push_back(5); //insert value in it(push)
    v.emplace_back(6);
    v.push_back(7); //insert value in it(push)
    v.emplace_back(8);
    for(auto itr = v.begin(); itr != v.end();itr++){
     cout << *(itr) << " ";
    }
    */



    // using for each loop for accesssing vector



    /*vector<int> v;
    v.push_back(5); 
    v.emplace_back(6);
    v.push_back(7); 
    v.emplace_back(8);
    for(auto itr : v){
        cout << itr << " ";
    }*/


    // accessing elements is over 

    // now lets see how to delete element in vector

    // we use erase function to delete

    //deleting one element from a vector

    /*vector<int> v; 
    v.push_back(5);
    v.emplace_back(6);
    v.push_back(7); 
    v.emplace_back(8);
    v.erase(v.begin()+1); // deleting the element
    for(auto itr : v){
        cout << itr <<" ";
    }
    */


    //deleting multiple element 

    /*vector<int> v; 
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(3); 
    v.emplace_back(4);
    v.push_back(5);
    v.emplace_back(6);
    v.push_back(7); 
    v.emplace_back(8);
    v.erase(v.begin(),v.begin()+5); // deleting the element
    for(auto itr : v){
        cout << itr <<" ";
    }
    */
    


    //insert function


    /*vector<int> v; 
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(3); 
    v.emplace_back(4);
    v.push_back(5);
    v.emplace_back(6);
    v.push_back(7); 
    */
    /*v.insert(v.begin(),10);           // inserting single value at a specified solution
    for(auto itr : v){               
        cout << itr <<" ";
    } */
    /*v.insert(v.begin()+3 , 2, 10);      // inserting multiple elements at a specified place
    for(auto i : v){                    // syntax (start,instance,value)
        cout <<i << " ";
    }*/
    
    //cout << v.size(); // display tthe size

    //v1.swap(v2);  // swap vector v1 and v2

    //v.clear()  // it will clear the vector
//}




    // list


    /*void explaininglist(){
        list<int> ls;
        ls.push_back(2);
        ls.emplace_back(2);
        ls.push_front(5);
        ls.emplace_front();

    }
*/
    // all other same as vectors.......


    //dequeue

    /*void explainingdequeue(){
        deque<int> dq;
        dq.push_back(2);
        dq.emplace_back(3);
        dq.push_front(1);
        dq.emplace_front(0);
        for(auto j :dq){
            cout << j << " " ;
        }
        cout << endl;
        dq.pop_back();
        dq.pop_front();
        for(auto j :dq){
            cout << j << " ";
        }
    }
    */

    // all other same as vectors


    // stack     lifo    last in first out

    // important push,pop,top


    /*void explainingstack(){
        stack<int> st;
        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
        st.push(5);
        st.push(6);

        cout << st.top() << endl;
        st.pop();
        cout << st.top() << endl;
        cout << st.size() << endl;
        cout << st.empty() << endl;

        // we cam also swap 2 stacks

        //st1.swap(st2);
    }   */





    //queue   fifo  first in first out

    /*void explainingqueue(){
        queue<int> q;
        q.push(1);
        q.push(2);
        q.push(3);

        q.back() += 5;
        cout << q.back() << endl;
        cout << q.front() << endl;

        q.pop();
        cout << q.front();

        //all other operation are similar like stack
    } */


    //priority queue    it usually stores based on the highest value  

    /*void explainingpriorityqueue(){     
        /*priority_queue<int> pq;     // MAX HEAP
        pq.push(1);
        pq.push(2);
        pq.push(3);
        pq.push(6);
        pq.push(5);
        pq.push(4);

        cout << pq.top() << endl;
        pq.pop();
        cout << pq.top() << endl;
        

        // to create a pq which stores less number in the top

        priority_queue<int, vector<int>, greater<int>> pq;   // MIN HEAP
        pq.push(3);
        pq.push(6);
        pq.push(5);
        cout << pq.top() << endl;


    } */


    // SETS  everything is unique and sorted


    /*void explainset(){
        set<int> s;
        s.insert(1);
        s.insert(4);
        s.insert(3);
        s.insert(1);
        s.insert(1);
        s.insert(1);
        s.insert(2);

        /*for(auto itr : s){
            cout << itr << " ";
        }

        //auto itr = s.find(3);
        
        //s.erase(3);  it will delete 3

        int c = s.count(7);*/
        //cout << c << endl;


        //deleting element useing erase

        /*auto itr1 = s.find(2);
        auto itr2 = s.find(3);
        s.erase(itr1,itr2);

        for(auto itr : s){
            cout << itr << " ";
        } */
    //}

        //similar to vector

        // MULTISET stores in sorted method and does not contain unique value



           
    bool comp(pair <int , int> p1 , pair <int , int> p2){
        if(p1.second <p2.second) return true;
        if(p1.second > p2.second) return false;
        // if same
        if(p1.first > p2.first) return true;
        return false;
    }
    void extra(){
        pair<int , int> p[] = {{1,2} , {2,1} , {4,1}};
        sort(p,p+3,comp);  // this will sort according to the question
                           //and gives the answer as {{4,1} , {2,1} , {5,2}}
    }

    
int main(){
    //explainingpairs();
    //explainingvectors();
    //explaininglist();
    //explainingdequeue();
    //explainingstack();
    //explainingqueue();
    //explainingpriorityqueue();
    // explainset();
    //extra();

   
   //sorting an array in ascending order
   
   /*int arr[5];
   cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
   cout<< arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << endl;
   sort(arr,arr+4);
   cout<< arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << endl;
   */



   // sorting a vector in ascending order

    /*vector<int> v; 
    v.push_back(2);
    v.emplace_back(5);
    v.push_back(7); 
    v.emplace_back(3);
    v.push_back(1);
    v.emplace_back(6);
    v.push_back(9); 
    for(auto itr : v){
        cout << itr <<" ";
    }
    cout << endl;
    sort(v.begin(),v.end());
    for(auto itr : v){
        cout << itr <<" ";
    } */
    

    // sorting a array in descending ordert
    /*int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout<< arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << endl;
    sort(arr,arr+5, greater<int>()); // sort in descendng order 
    cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << endl;  */



    // consider a pair or 2 elements
    // sort the pairs according to the second element
    // if second element is same then sort accordingf to the first element using decending order

    /*int num = 7;
    int cnt = __builtin_popcount(num);    // returns the number of 1 by converting the number to binary
    cout << cnt; 
    */   


    long long n =123456789123456789;
    cout << __builtin_popcountll(n)  ;   //if long long add ll to the function

    // next permutation

    /*string s = "123";
    do{
        cout<<s<<endl;
    } while(next_permutation(s.begin(), s.end()));
    */

   // max element
   //pair<int , int> a[] = {{1,2} , {2,1} , {4,1}};
   //int maxi = max_element(a,a+n);


}