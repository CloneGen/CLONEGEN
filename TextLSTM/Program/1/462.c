int sum = 1;
int Fact (int x, int y);

int main () {
    int n, a;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> a;
        sum = 1;
        Fact (a, 2);
        cout << sum << endl;
    }
    return 0;
}

int Fact (int x, int y) {
    if (x == 1)
        return 0;
    else {
        for (; y <= sqrt (x); y++)
            if (x % y == 0) {
                sum = sum + Fact (x / y, y);
            }
        return 1;
    }
}

