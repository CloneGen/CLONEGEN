int f (int a, int min);

int f (int a, int min) {
    if (a < min) {
        return 0;
    }
    int result = 1;
    for (int i = min;
    i * i <= a; i++) {
        if (a % i == 0) {
            result += f (a / i, i);
        }
    }
    return result;
}

int main () {
    int n, k;
    cin >> n;
    while (n > 0) {
        cin >> k;
        cout << f (k, 2) << endl;
        n--;
    }
}

