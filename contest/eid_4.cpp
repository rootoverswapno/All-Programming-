#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the single digit sum of a number
int singleDigitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to count powerful numbers in the range [N, M]
int countPowerful(int N, int M) {
    int count = 0;
    // Powerful numbers are of the form 6k, where k is a non-negative integer
    // So, we find the first multiple of 6 greater than or equal to N
    int start = ceil((double)N / 6) * 6;
    for (int num = start; num <= M; num += 6) {
        if (singleDigitSum(num) == 6)
            ++count;
    }
    return count;
}

// Function to count most powerful numbers in the range [N, M]
int countMostPowerful(int N, int M) {
    int count = 0;
    // Most powerful numbers are both powerful and divisible by 6
    // So, we find the first multiple of 6 greater than or equal to N
    int start = ceil((double)N / 6) * 6;
    for (int num = start; num <= M; num += 6) {
        if (singleDigitSum(num) == 6)
            ++count;
    }
    return count;
}

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        int q;
        cin >> q;

        cout << "Case " << i << ":" << endl;
        for (int j = 0; j < q; ++j) {
            int N, M;
            cin >> N >> M;

            int powerfulCount = countPowerful(N, M);
            int mostPowerfulCount = countMostPowerful(N, M);

            cout << powerfulCount << " " << mostPowerfulCount << endl;
        }
    }

    return 0;
}
