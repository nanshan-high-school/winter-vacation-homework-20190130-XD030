#include <iostream>
using namespace std;
int main() 
{
    string words;
    cout << "請輸入字串:";
    cin >> words;
    int i = 0, k = 0;
    while(words[i] != 0)
    {
        i++;
    }
    for(int j = 0; j < i / 2; j++)
    {
        if((int)words[j] != (int)words[i-j-1])
        {
            k++;
        }
    }
    if(k == 0)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}
