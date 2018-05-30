#include <iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;

int main(int argc, char* argv[])
{
    int SIZE;
    char pass[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";
    srand(time(NULL));
    cout<<"Please enter the length of password"<<endl;
    cin>>SIZE;
    cout<<"Your password is:";
    for(int i=0;i<SIZE;i++)
    {
        cout<<pass[rand() %62 +0];
    }
    cout<<endl;
    return 0;
}
