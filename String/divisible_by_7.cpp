
#include <bits/stdc++.h>
using namespace std;

int isdivisible7(string num){
    int number = 0;

    for(auto ch: num)
    {
        number = ((number * 10) + (ch - '0')) % 7;
    }
    if(number == 0)
    {
        return 1;
    }
    return 0;    
    }    


int main(){
   string num = "1000";
    cout << isdivisible7(num) << endl;
    return 0;
}