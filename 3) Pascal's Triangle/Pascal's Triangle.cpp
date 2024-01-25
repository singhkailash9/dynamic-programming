#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generate(int n) {
    vector<vector<int>> pascalList{{1}};
    for (int i = 0; i < n - 1; i++) {
        vector<int> temp = {0};
        temp.insert(temp.end(), pascalList[pascalList.size() - 1].begin(), pascalList[pascalList.size() - 1].end());
        temp.push_back(0);

        vector<int> row;
        for (int j = 0; j < temp.size() - 1; j++) {
            row.push_back(temp[j] + temp[j + 1]);
        }
        pascalList.push_back(row);
    }
    return pascalList;
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    vector<vector<int>> result = generate(n);
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
