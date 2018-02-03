#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

bool compareByLength(const pair<int,int> &a, const pair<int,int> &b) {
    return a.second < b.second;
}

int main() {

    int n;
    scanf("%d", &n);

    pair<int, int> values[n];
    pair<int, int> p;
    int temp;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &p.first);
        scanf("%d", &temp);
        p.second = temp + p.first;
        values[i] = p;
    }
    sort(values, values + n, compareByLength);

    int count = 1;
    temp = 0;
    for (int j = 1; j < n; ++j) {
        if (values[temp].second <= values[j].first) {
            temp = j;
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}