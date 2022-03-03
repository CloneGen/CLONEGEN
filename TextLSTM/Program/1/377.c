int totalCount;

void FindFact (int x, int max) {
    if (x == 1) {
        totalCount++;
        return;
    }
    for (int i = max;
    i > 1; i--)
        if (x % i == 0)
            FindFact (x / i, i);
    return;
}

int main () {
    int n, x;
    for (cin >> n; n > 0; n--) {
        totalCount = 0;
        cin >> x;
        FindFact (x, x / 2);
        cout << totalCount + 1 << endl;
    }
    return 0;
}

