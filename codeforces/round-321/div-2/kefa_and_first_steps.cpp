#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

inline
void use_io_optimizations()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    use_io_optimizations();

    unsigned int days;
    cin >> days;

    vector<unsigned int> gains(days);

    for (auto& gain : gains)
    {
        cin >> gain;
    }

    unsigned int current {1};
    unsigned int longest {1};

    for (unsigned int i {1}; i < days; ++i)
    {
        if (gains[i] >= gains[i - 1])
        {
            ++current;
        }
        else
        {
            current = 1;
        }

        longest = max(longest, current);
    }

    cout << longest << '\n';

    return 0;
}

