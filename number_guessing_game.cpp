#include<iostream>
using namespace std;
int main()
{   int h_user,g_user;
    cout<<"Please host enter a number to guess";
    cin>>h_user;
    system("cls");//clears the screen 
    cout<<"Guest please guess a number";
    cin>>g_user;
    (g_user==h_user)?cout<<"Correct":cout<<"Failed";//? is a ternery operator

    return 0;
}