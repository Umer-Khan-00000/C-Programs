#include <iostream>
#include <vector>
#include <algorithm>

bool isFraudulent(const int& transaction) {
    // A mock check for fraudulent transaction
    return transaction < 0;  // Let's assume negative amounts are fraudulent
}

int main() {
    std::vector<int> transactions = {100, 200, -50, 300};

    // Check if none of the transactions are fraudulent
    if (!std::none_of(transactions.begin(), transactions.end(), isFraudulent)) {
        std::cout << "Fraudulent transactions detected. Processing stopped.\n";
    } else {
        std::cout << "All transactions are valid. Processing...\n";
    }

    return 0;
}
