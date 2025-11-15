#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    // we only need to check if any word is repeated. 
    // We can store values into a structure, checking if one already exists before adding another
    string word;
    set<string> uniqueWords;

    // check while input
    bool input;
    while(cin >> word){
        auto it = uniqueWords.find(word);
        if(it != uniqueWords.end()){
            cout << "no";
            return 0;
        }
        uniqueWords.insert(word);
    }
    cout << "yes";
    return 0;
}