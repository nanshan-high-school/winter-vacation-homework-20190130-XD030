#include <iostream> 
using namespace std; 
int main(){ 
char *code[26] = 
{ 
    (char*)"10",(char*)"11",(char*)"12",(char*)"13",(char*)"14",(char*)"15",(char*)"16",(char*)"17",(char*)"34",(char*)"18",(char*)"19",(char*)"20",(char*)"21",(char*)"22",(char*)"35",(char*)"23",(char*)"24",(char*)"25",(char*)"26",(char*)"27",(char*)"28",(char*)"29",(char*)"32",(char*)"30",(char*)"31",(char*)"33"
}; 
int num[10] = { 0, 8, 7, 6, 5, 4, 3, 2, 1, 0}; 
cout << "請輸入您的身份證號碼:"; 
for(int j = 0; j < 1; j++)
{
  char id[10] = {'\0'}; 
  int i, s; 
  for(i = 0; i < 10; i++)
  {
    cin >> id[i];
  }

  for(i = 1; i < 10; i++)
  if(id[i] >= 9 && id[i] <= 0)
  cout << "輸入錯誤!";

  if( ((int)id[0] >= 'Z' && (int)id[0] <= 'A') || i < 10 || ((int)id[0] <= 'z' && (int)id[0] >= 'a'))
  cout << "輸入錯誤!";

  else
  {
    for(s = 0, i = 8; 0 < i; i--)
      s += (num[i] * (id[i] - '0')); 
      s += (code[id[0]-'A'][0]-'0'); 
      s += 9 * (code[id[0]-'A'][1]-'0'); 
      s %= 10; 
      s = 10 - s;
  } 

  if((s + '0') == id[9]) 
  cout << "real"; 
  else 
  cout << "fake"; 
}
} 
