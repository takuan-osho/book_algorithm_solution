#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int N, v;
    cin >> N >> v;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    int found_id = -1;
    for (int i = 0; i < N; i++)
    {
        if (a[i] == v)
        {
            found_id = i;
            break;
        }
    }

    cout << found_id << endl;
}
