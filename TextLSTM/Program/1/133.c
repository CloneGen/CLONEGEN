int f (int a, int min) {
    int j, num;
    if (a < min)
        return 0;
    num = 1;
    for (j = min; j < a; j++)
        if (a % j == 0)
            num = num + f (a / j, j);
    return num;
}

int main () {
    int n, i, out, a;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a;
        out = f (a, 2);
        cout << out << endl;
    }
    return 0;
}

