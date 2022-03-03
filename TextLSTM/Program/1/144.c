int factorize (int m, int k) {
    int c = 1;
    if (m < 4)
        return 1;
    for (int i = k;
    i <= sqrt (m); i++)
        if (!(m % i))
            c += factorize (m / i, k > i ? k : i);
    return c;
}

int main (int argc, char *argv []) {
    int n, m;
    cin >> n;
    while (n--) {
        cin >> m;
        cout << factorize (m, 2) << endl;
    }
    return 0;
}

