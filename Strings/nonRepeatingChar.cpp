// Problem Statement: Given a string, print non-repeating characters of the string.

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Method to find and print non-repeating characters
    void nonRepeating(string & st, int freq[200]) {
        int i, j;
        // Get the length of the string
        int l = st.length();  
        // Count frequency of each character
        for (int i = 0; i < l; i++) {
            if (st[i] == ' '){  // Ignoring spaces in the string
                continue;
            }else{
                // Incrementing each character's frequency
                freq[st[i] - 'a']++;  
            }
        }
        // Print non-repeating characters
        for (int i = 0; i < l; i++) {
            if (freq[st[i] - 'a'] == 1 && st[i] != ' ') {
                // Output the non-repeating character
                cout << st[i] << "";  
            }
        }
    }

    void nonRepeating(string s){
        map<char, int> freq;
        for(int i=0; i<s.length(); i++){
            freq[s[i]]++;
        }

        for(auto i:freq){
            if(i.second==1){
                cout<<i.first;
            }
        }
    }
};

int main() {

    // Input string
    string st = "blockchain technology";  
    // Get the length of the string
    int l = st.length();  
    // Initialize frequency array
    int freq[200] = {0};  
    Solution obj;
    // Print message
    cout << "Non-Repeating characters: ";  
    // Call the method to print non-repeating characters
    obj.nonRepeating(st, freq);  
    cout << "\nNon-Repeating characters: ";  
    obj.nonRepeating(st);  
    return 0;
}