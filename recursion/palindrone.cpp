#include<iostream>
using namespace std;
bool palindrone(string s){
    int left =0, right = s.length() -1;
    while(left<right){
        if(!isalnum(s[left]))
        left++;
        else if(!isalnum(s[right]))
        right--;
        else if(tolower(s[left])!= tolower(s[right]))
        return false;
        else{
            left++;
            right--;
        }
    }
    return true;
}
int main() {
    string str="ABCDCBA";
    bool ans= palindrone(str);
    if(ans == true){
        cout << "Palindrone" <<endl;
    }
    else {
    cout << "Not Palindrome";
   }
   return 0;
}