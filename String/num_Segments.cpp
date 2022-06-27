#include<bits/stdc++.h>
using namespace std;

int Num_Segments(string s)
{
    int count = 0;
         if(s.empty())
         {
                return 0;
          }
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] != ' ' && ((s[i+1] == ' ') || (s[i+1] == '\0')))
            {
                count++;
            }
        }
        
    return count; 
}
int main()
{
    string s = "     ";
    cout << Num_Segments(s) << endl;
}