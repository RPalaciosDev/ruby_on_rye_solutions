#include <iostream>
using namespace std;

int main(){
    int upperCount = 0;
    int firstDivisor = 0;
    int secondDivisor = 0;

    cin >> upperCount;
    cin >> firstDivisor;
    cin >> secondDivisor;

    int fizzCount = 0;
    int buzzCount = 0;
    int fizzbuzzCount = 0;

    for(int i = 1; i <= upperCount; i++){
        if(i % firstDivisor == 0 && i % secondDivisor == 0){
            fizzbuzzCount += 1;
        }
        else{
            if(i % firstDivisor == 0){
            fizzCount += 1;
            }
            else if(i % secondDivisor == 0){
                buzzCount += 1;
            }
        }
    }
    
    cout << fizzCount << " " << buzzCount << " " << fizzbuzzCount;
    return 0;
}