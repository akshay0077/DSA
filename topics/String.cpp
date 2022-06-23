#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    string str ;
    string str2 = "the";
    //1.input functions

    //get input in string 
    getline(cin,str); 
    cout << str << endl;

    // push_back() & pop_back() same as vector

    // 2. iterator func
    // begin() & end()
    string::iterator it = str.begin();
    cout << *it << endl;

    // reverse string
    // reverse(str.begin() , str.end());
    // cout << str << endl;

    // insert string
    str.insert(6,str2); 
    cout << str << endl;

    // erase string
    str.erase (str.begin()+3);
    // str.erase (10,8); 
    
    // find in string
    str.find("ik"); 
    if(str.find("ik"))
    {
        cout << "true" << endl;
    }

    // substr in string
    string str3 = str.substr (3,5);
    cout << str3 << endl;

    // other functions

        // strcpy(s1, s2);

        // Copies string s2 into string s1.

            
        // strcat(s1, s2);

        // Concatenates string s2 onto the end of string s1.

        // 3	
        // strlen(s1);

        // Returns the length of string s1.

        // 4	
        // strcmp(s1, s2);

        // Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.

        // 5	
        // strchr(s1, ch);

        // Returns a pointer to the first occurrence of character ch in string s1.

        // 6	
        // strstr(s1, s2);

        // Returns a pointer to the first occurrence of string s2 in string s1.
}