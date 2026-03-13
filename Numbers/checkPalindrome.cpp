// Check if a number is palindrome or not

#include<iostream>
#include<vector>
using namespace std;

bool checkPalindrome(int n){
    if(n<10){
        return false;
    }
    int reverse=0;
    int dup=n;
    while(n>0){
        int temp = n%10;
        reverse = (reverse*10) + temp;
        n /= 10;
    }
    if(reverse==dup){
        return true;
    }
    return false;
}

// Find all Palindrome Numbers in a given range

void palindromes(int start, int end){
    vector<int> res;
    while(start<end){
        if(checkPalindrome(start)){
            res.push_back(start);
        }
        start++;
    }

    for(int val:res){
        cout<<val<<" ";
    }
}

int main(){
    if(checkPalindrome(121)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }

    palindromes(10,50);

    return 0;
}