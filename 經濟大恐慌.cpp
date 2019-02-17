#include<iostream>
using namespace std;
int main()
{
  int day, num = 0, sub = 0, mon = 1;
  cout <<"請輸入買了幾天的饅頭:";
  cin >> day;
  int s[day];
  for(int h = 0; h < day; h++)
  {
  cout << h + 1 <<" ";
  }
  for(int j = 0; j < 1; j++)
  {
    for(int i = 0; i < day; i++)
    {
      cin >> s[i];
      sub = s[i];
      sub = sub * mon;
      num = sub + num;
      mon++;
    }
    cout << "共花了" << num << "元";
  }
}
