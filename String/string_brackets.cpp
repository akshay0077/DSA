#include <bits/stdc++.h>
using namespace std;

int string_brackets(string num){
    int count = 0;

    for (int i = 0; i < num.size(); i++)
    {
        if(num[i] == ')')
        {
            count++;
        }
    }
    return count;
}    


int main(){
   string str = "))";
    cout << string_brackets(str) << endl;
    return 0;
}