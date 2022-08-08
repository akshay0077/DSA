#include<iostream>
using namespace std;

int main()
{
    int note1,note2,note5,note10,note20,note50,note100,note200,note500,amount;
    note1 = note2 = note5 = note10 = note20 = note50 = note100 = note200 = note500 = amount = 0;
    cout << "enter Rupees : " << endl;
    cin >> amount ;

    if(amount >= note500)
    {
        note500 = amount / 500;
        amount -= note500 * 500;
    }
    if(amount >= note200)
    {
        note200 = amount / 200;
        amount -= note200 * 200;
    }
    if(amount >= note100)
    {
        note100 = amount / 100;
        amount -= note100 * 100;
    }
    if(amount >= note50)
    {
        note50 = amount / 50;
        amount -= note50 * 50;
    }
    if(amount >= note20)
    {
        note20 = amount / 20;
        amount -= note20 * 20;
    }
    if(amount >= note10)
    {
        note10 = amount / 10;
        amount -= note10 * 10;
    }
    if(amount >= note5)
    {
        note5 = amount / 5;
        amount -= note5 * 5;
    }
     if(amount >= note2)
    {
        note2 = amount / 2;
        amount -= note2 * 2;
    }
     if(amount >= note1)
    {
        note1 = amount / 1;
        amount -= note1 * 1;
    }

    cout << "Total Number of notes is : " << endl;
    cout << "500 : " << note500 << endl;
    cout << "200 : " << note200 << endl; 
    cout << "100 : " << note100 << endl; 
    cout << "50 : " << note50 << endl; 
    cout << "20 : " << note20 << endl; 
    cout << "10 : " << note10 << endl; 
    cout << "5 : " << note5 << endl; 
    cout << "2 : " << note2 << endl; 
    cout << "1 : " << note1 << endl;
}