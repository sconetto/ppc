#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
    vector<long long int> v;
    int n;
    cin >> n;
    int odds = 0, even = 0;
    long long total = 0;
    for(size_t i = 0; i < n; ++i) {
        long long int temp;
        cin >> temp;
        total += temp;
        if (temp & 1LL)
            odds++;
        else
            even++;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    if(odds & 1LL)
    {
        for(size_t i = 0; i < n; ++i)
            if(v[i] & 1)
            {
                total-=v[i];
                break;
            }
    }
    cout << total << endl;
    return 0;
}
