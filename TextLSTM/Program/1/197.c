int f (int x, int y);

int main () {
    int n, i, j, a, sum;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a;
        sum = 0;
        for (j = 1; j <= a; j++)
            sum += f (a, j);
        cout << sum << endl;
    }
    return 0;
}

int f (int x, int y) {
    int i, num = 0;
    if (y == 1)
        return 0;
    else {
        if (x % y != 0)
            return 0;
        else if (x == y)
            return 1;
        else {
            for (i = y; i >= 1; i--)
                num += f (x / y, i);
            return num;
        }
    }
}

