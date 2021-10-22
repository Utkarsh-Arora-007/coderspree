#include <iostream>
using namespace std;
int countdigit(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

int main(int argc, char **argv){
    int n;
    cin >> n;
    cout<<countdigit(n);
    //write your code here
    
}