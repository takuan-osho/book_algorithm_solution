#include <iostream>
#include <vector>
using namespace std;
const int INF = 2000000;

int main(int argc, char const *argv[])
{
    int N, K;
    cin >> N >> K;
    vector<int> a(N), b(K);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> b[i];
    }

    int min_value = INF;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[i] + b[j] < K)
            {
                continue;
            }

            if (a[i] + b[j] < min_value)
            {
                min_value = a[i] + b[j];
            }
        }
    }

    cout << min_value << endl;

    return 0;
}
