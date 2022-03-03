int divide (int n, int i);

int main () {
    int n = 0;
    int t = 0;
    int sum;
    cin >> t;
    for (int i = 0;
    i < t; i++) {
        sum = 0;
        cin >> n;
        for (int j = 2;
        j <= n / 2; j++) {
            sum = sum + divide (n, j);
        }
        cout << sum + 1 << endl;
    }
    return 0;
}

int divide (int n, int i) {
    int num = 0;
    if (n % i == 0) {
        if (n == i) {
            return 1;
        }
        for (int j = 2;
        j <= i; j++) {
            num = num + divide (n / i, j);
        }
        return num;
    }
    else {
        return 0;
    }
}

