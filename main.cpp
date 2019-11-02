#include <bits/stdc++.h>
using namespace std;

int main() {
    int numOfMinasQuery = 0; int numOfMarbles = 0; int numCase = 0;

    while(std::cin >> numOfMarbles >> numOfMinasQuery && numOfMarbles != 0)
    {
        std::vector<int> marblesSet; int marble = 0; int minaQuery = 0;
        for(int i = 0; i < numOfMarbles; ++i) { cin >> marble; marblesSet.push_back(marble); }
        std::sort(marblesSet.begin(), marblesSet.end());

        cout << "CASE# " << ++numCase << ":" << endl;

        for(int i = 0; i < numOfMinasQuery; ++i)
        {
            cin >> minaQuery;
            auto itFind = std::find(marblesSet.begin(), marblesSet.end(), minaQuery);
            auto pos = std::distance(marblesSet.begin(), itFind);

            if(itFind == marblesSet.end()){ cout << minaQuery << " not found" << endl; }
            else { cout << minaQuery << " found at " << pos + 1 << endl; }
        }
    }
    return 0;
}
