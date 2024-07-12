#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item {
    int weight;
    int value;
    double valuePerWeight;
    bool operator<(const Item& other) const {
        return valuePerWeight> other.valuePerWeight;
    }

}

double fractionalKnapsack(vector<Item>& items, int capacity) {
    sort(items.begin(),items.end());
    double totalValue=0.0;
    int currentWeight=0;
    for (const auto& item: items) {
        if (currentWeight+ item.weight <=capacity){
            totalValue +=item.value;
            currentWeight+=item.weight;
        }else{
            int remainingCapacity=capacity- currentWeight;
            totalValue+=item.valuePerWeight*remainingCapacity;
            break;
        }
    }

    return totalValue;
}

int main() {
    vector<Item> items = {{10, 60}, {20, 100}, {30, 120}};
    int capacity = 50;

    for (auto& item : items) {
        item.valuePerWeight = static_cast<double>(item.value) / item.weight;
    }

    double maxValue = fractionalKnapsack(items, capacity);
    cout << "Maximum value that can be obtained: " << maxValue << endl;

    return 0;
}
