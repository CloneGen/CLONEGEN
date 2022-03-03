int fibonacci [1000] = {0, 1, 1};

int f (int n) {
    if (fibonacci[n] > 0) {
        return fibonacci[n];
    }
    return f (n - 1) + f (n - 2);
}

int main () {
    int k, n;
    cin >> k;
    while (k--) {
        cin >> n;
        cout << f (n) << endl;
    }
    return 0;
}

