int ways (int a, int min);

int main () {
    int n, a, i, sum = 0, k, min;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a;
        sum = 0;
        for (k = 2; k <= a; k++) {
            if (a % k == 0) {
                min = k;
                break;
            }
        }
        if (a != min)
            sum = ways (a, min);
        else
            sum = 1;
        cout << sum << endl;
    }
    return 0;
}

int ways (int a, int min) {
    int result = 1, i;
    if (a < min)
        return 0;
    for (i = min; i < a; i++) {
        if (a % i == 0)
            result += ways (a / i, i);
    }
    return result;
}

