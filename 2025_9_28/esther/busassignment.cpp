#include <iostream>
using namespace std;
int main(){
    int stopCount;
    //cout << "Stop count: ";
    cin >> stopCount;

    int currentCapacity = 0;
    int minCapacity = 0;
    for(int i = 0; i < stopCount; i++){
        //cout << "row" << i + 1 << ": ";
        int peopleOut;
        int peopleIn;
        cin >> peopleOut;
        cin >> peopleIn;
        //cout << "Your line: " << peopleIn << " " << peopleOut << endl;

        currentCapacity += peopleIn - peopleOut;
        
        if(currentCapacity > minCapacity){
            minCapacity =  currentCapacity;
        }
        // store into vector, then ask for next line
    }
    //cout << "Min capacity: " << minCapacity;
    cout << minCapacity;
    return 0;
}