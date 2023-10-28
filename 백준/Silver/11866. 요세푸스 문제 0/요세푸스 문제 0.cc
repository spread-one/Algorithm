#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    list<int> people;
    vector<int> josephus;
    for (int i = 1; i <= N; i++) {
        people.push_back(i);
    }
    list<int>::iterator it = people.begin();

    while (!people.empty()) {
        for (int i = 0; i < K - 1; i++) {
            ++it;
            if (it == people.end()) {
                it = people.begin();
            }
        }

        josephus.push_back(*it);
        it = people.erase(it);
        if (it == people.end()) {
            it = people.begin();
        }
    }
    cout << "<";
    for (int i = 0; i < josephus.size() - 1; i++) {
        cout << josephus[i] << ", ";
    }
    cout << josephus.back() << ">";

    return 0;
}