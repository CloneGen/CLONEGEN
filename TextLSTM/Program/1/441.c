int remember = 0;

int number (int const1, int a) {
    if (a == 1) {
        remember++;
        return 1;
    }
    else {
        for (int i = const1;
        i <= a; i++) {
            if (a % i == 0)
                number (i, a / i);
        }
    }
}

int main () {
    int n;
    cin >> n;
    int cases [n];
    for (int j = 0;
    j < n; j++)
        cin >> cases[j];
    for (int j = 0;
    j < n; j++) {
        number (2, cases[j]);
        cout << remember << endl;
        remember = 0;
    }
    return 0;
}

