#include <iostream>
#include <string>

int calculateStringSum(const std::string& str) {
    int sum = 0;
    for (char ch : str) {
        // Convert character to lowercase
        ch = std::tolower(ch);
        // Calculate its value based on its position in the alphabet
        sum += ch - 'a' + 1;
    }
    return sum;
}

bool canWishEid(const std::string& str) {
    int n = str.length();
    int sum = calculateStringSum(str);
    return sum < n * (n - 1);
}

int main() {
    int T;
    std::cin >> T;
    std::cin.ignore(); // Ignore newline after reading T

    for (int i = 0; i < T; ++i) {
        std::string S;
        std::getline(std::cin, S);

        if (canWishEid(S)) {
            std::cout << "Eid Mubarak" << std::endl;
        } else {
            std::cout << "Dear husband" << std::endl;
        }
    }

    return 0;
}
