int f (int min, int a) {
    if (min > a)
        return 0;
    int i;
    int num = 1;
    for (i = min; i <= sqrt (a); i++) {
        if (a % i == 0) {
            num = num + f (i, a / i);
        }
    }
    return num;
}

int main () {
    int m, a, j;
    cin >> m;
    for (j = 0; j < m; j++) {
        cin >> a;
        cout << f (2, a) << endl;
    }
    return 0;
}

