#include <iostream>
#include<vector>
#include <string>
using namespace std;

void reverseString(vector<char>& s) {
        int j=s.size()-1;
        int i = 0;
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }

int main() {
  vector<char> s= {'h', 'e','l','l','o'};
  reverseString(s);
  for(int i = 0; i< s.size() ; i++){
      std::cout << s[i] << std::endl;
  }
  
  return 0;
}
