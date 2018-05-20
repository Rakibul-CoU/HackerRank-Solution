#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end(), [](const std::string &left, const std::string &right) {
        if (left.size() != right.size()) {
            return left.size() < right.size();
        } else {
            return left < right;
        }
    });
    for (const std::string &s : a) {
        std::cout << s << '\n';
    }
    return 0;
}
