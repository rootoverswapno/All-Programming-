#include <iostream>
#include <vector>

int maxPotatoes(int n, int P, int M, const std::vector<int>& weights) {
    int totalWeight = 0;
    int numPotatoes = 0;

    for (int i = 0; i < n; ++i) {
        if (weights[i] < M && totalWeight + weights[i] < P * M) {
            totalWeight += weights[i];
            numPotatoes++;
        }
    }

    return numPotatoes;
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 1; t <= T; ++t) {
        int n, P, M;
        std::cin >> n >> P >> M;

        std::vector<int> weights(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> weights[i];
        }

        int maxPotato = maxPotatoes(n, P, M, weights);
        std::cout << "Case " << t << ": " << maxPotato << std::endl;
    }

    return 0;
}
