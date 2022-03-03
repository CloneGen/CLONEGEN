int j = 2;

int kinds (int x) {
    int sum = 1;
    if (x == 1)
        return 0;
    for (int i = j;
    i <= sqrt (x); i++)
        if (x % i == 0) {
            sum += kinds (x / i);
            j = i + 1;
        }
    return sum;
}

int main () {
    int n = 0;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        int x = 0;
        cin >> x;
        cout << kinds (x) << endl;
        j = 2;
    }
    return 0;
}

