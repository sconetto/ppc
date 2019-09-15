#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;

void printresult(unsigned long long result){

    string s = "";

    if (result == 0){
        s = "0";
    }

    while(result > 0){

        int i = result % 10;
        result /= 10;

        s.push_back(i + '0');
    }

    reverse(s.begin(), s.end());

    cout << s << '\n';

}

int main(){

    int n;
    cin >> n;

    vector <unsigned long long int> odds;
    vector <unsigned long long int> evens;

    for(int i = 0; i < n; i++){
        unsigned long long int aux;
        cin >> aux;

        if (aux % 2 == 0) evens.push_back(aux);
        else odds.push_back(aux);
    }

    unsigned long long result = 0;
    for(auto x : evens){
        result += x;
    }

    if (odds.size() > 0){

        sort(odds.begin(), odds.end());
        reverse(odds.begin(), odds.end());

        int k, t = 0;
        if (odds.size() % 2 == 0) k = odds.size();
        else{
            k = odds.size() - 1;
            t = odds[odds.size() - 1];
        }

        for(int i = 0; i < k; i++){
            result += odds[i];
        }

        if (result + t % 2 == 0) result += t;
    }

    printresult(result);


    return 0;
}
