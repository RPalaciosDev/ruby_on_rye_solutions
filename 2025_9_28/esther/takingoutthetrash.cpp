#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int bagCount = 0;
    int maxCarriableWeight = 0;
    int trips = 0;

    cin >> bagCount;
    cin >> maxCarriableWeight;

    // take in inputs, put them in a vector
    vector<int> bagWeights;
    int temp = 0;
    for(int i = 0; i < bagCount; i++){
        cin >> temp;
        bagWeights.push_back(temp);
    }

    // sort the list
    sort(bagWeights.begin(), bagWeights.end());
    
    int frontIndex = 0;
    int backIndex = bagCount - 1;
    //cout << backIndex;

    for(; frontIndex < backIndex; ){
        int sum = bagWeights[frontIndex] + bagWeights[backIndex];
        if(sum <= maxCarriableWeight){
            frontIndex++;
            backIndex--;
            trips++;
        }
        else{
            backIndex--;
            trips++;
        }
    }
    if(frontIndex == backIndex){trips++;}

    cout << trips;
    return 0;
}