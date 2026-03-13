// WAP to count Vowel, Consonant and Space in a string;

#include<iostream>
#include<string.h>
using namespace std;

void countVowelConsonantSpace(string s){
    int vowel = 0;
    int consonant = 0;
    int space = 0;

    // convert to lowercase
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }

    for(int i = 0; i < s.length(); i++){
        char lower = s[i];

        if(lower == ' '){
            space++;
        }
        else if(lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u'){
            vowel++;
        }
        else if(lower >= 'a' && lower <= 'z'){
            consonant++;
        }
    }

    cout << "Vowels: " << vowel << endl;
    cout << "Consonants: " << consonant << endl;
    cout << "Spaces: " << space << endl;
}

int main(){
    string s="This is my first program in this language";
    countVowelConsonantSpace(s);
}