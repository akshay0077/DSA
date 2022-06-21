#include<bits/stdc++.h>
using namespace std;

void display(vector<int>& v)
{
    for(int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

}
int main()
{
    // init vector
    vector<int> vec;

    // pushing value at end of vector
    vec.push_back(5);
    vec.push_back(10);
    vec.push_back(15);

   display(vec);
    

    // iterators of vector
    
    //begin() - fetch first element 
    vector<int> :: iterator itr =  vec.begin();
    cout << *itr << endl;

    //end() - fetch last element 
    vector<int> :: iterator itr1 =  vec.end()-1;
    cout << *itr1 << endl;
    vec.push_back(11);
    vec.push_back(12);
   
   // capacity of vector
    cout << "size" << vec.size() << endl;
    cout << "capacity" << vec.capacity() << endl;

    // element access

    // at func - access any position value 
    cout << vec.at(4);
  
    // front & back(); - get a first & last value 
    cout << vec.front();
    cout << vec.back();

    // modifires
    // assign() - assign all elements as a 10
    // vec.assign(5,10);
    display(vec);

    // pop_back() - enter value at last position
    vec.pop_back();
    display(vec);

    // insert - insert new ele before ele
    // vec.insert( vec.begin()+2, 10,2); 
    // vec.insert( vec.begin(),2); 
    //   display(vec);

    // erase - remove ele from specific position
    // vec.erase(vec.begin());
    //  display(vec);

    //  emplace - new ele at position
    vec.emplace(vec.begin(), 100);
     display(vec);
}