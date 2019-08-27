#include <iostream>

using namespace std;

int IsPalindrom(string str, int i, int j){
    if(i>j){
        return true;
    }
    else if(str[i] != str[j]){
        return false;
    }
    else{
        return IsPalindrom(str, i+1, j-1);
    }
}

void Palindrom(string str){
     int n = str.length();
     int result = IsPalindrom(str, 0, n-1);

     if(result == 1){
        cout << "The string is Palindrom.";
     }
     else{
        cout << "The string is not Palindrom.";
     }
}

int main()
{
    string str;
    cin >> str;
    Palindrom(str);
    return 0;
}


