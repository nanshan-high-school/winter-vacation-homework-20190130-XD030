#include <iostream>
using namespace std;
int main() {
  string sInput, sOutput;
  cout << "請輸入字母";
  cin >> sInput;
  int iLength = 0;
  while (sInput[iLength] != 0) {
      iLength++;
  }

  if(iLength == 7) {
    for(int i = 0; i <6; i++) {
      int iWord1 = sInput[i]-'a';
      int iWord2 = sInput[i+1]-'a';

      if (iWord1 < iWord2) {
        sOutput[i] = iWord2 - iWord1 +'0';
      } else {
        sOutput[i] = iWord1 - iWord2 + '0';
      }
      cout << sOutput[i];
    }
  } else {
    cout << "請輸入7個字母";
  }
}
