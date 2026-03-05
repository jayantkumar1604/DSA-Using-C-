#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

// Custom hash function for integers
struct CustomHash {
    size_t operator()(int key) const {
        // A simple yet effective hash function
        return key ^ (key >> 16);
    }
};

// Class for Hash Table using std::unordered_map
class HashTable {
private:
    std::unordered_map<int, std::string, CustomHash> table;
    std::vector<int> keys; // To maintain the keys for sorting

public:
    void insert(int key, const std::string& value) {
        table[key] = value;
        if (std::find(keys.begin(), keys.end(), key) == keys.end()) {
            keys.push_back(key);
        }
    }

    void remove(int key) {
        auto it = table.find(key);
        if (it != table.end()) {
            table.erase(it);
            keys.erase(std::remove(keys.begin(), keys.end(), key), keys.end());
        }
    }

    std::string search(int key) const {
        auto it = table.find(key);
        if (it != table.end()) {
            return it->second;
        }
        return "[INFO] Key not found.";
    }

    void display() const {
        for (const auto& pair : table) {
            std::cout << "[INFO] Key: " << pair.first << " Value: " << pair.second << std::endl;
        }
    }

    void displaySorted() {
        std::sort(keys.begin(), keys.end());
        for (const auto& key : keys) {
            std::cout << "[INFO] Key: " << key << " Value: " << table.at(key) << std::endl;
        }
    }
};

int main() {
    HashTable hashTable;

    hashTable.insert(1, "Value1");
    hashTable.insert(2, "Value2");
    hashTable.insert(3, "Value3");
    hashTable.insert(4, "Value4");
    hashTable.insert(14, "Value14");

    std::cout << "Displaying Hash Table:" << std::endl;
    hashTable.display();

    std::cout << "\nSearching for key 4: " << hashTable.search(4) << std::endl;

    std::cout << "\nRemoving key 2." << std::endl;
    hashTable.remove(2);

    std::cout << "\nDisplaying Hash Table after removing key 2:" << std::endl;
    hashTable.display();

    std::cout << "\nDisplaying Sorted Hash Table:" << std::endl;
    hashTable.displaySorted();

    return 0;
}
