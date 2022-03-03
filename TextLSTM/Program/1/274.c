int f (int a, int min) {
    int i;
    if (a < min) {
        return 0;
    }
    int result = 1;
    for (int i = min;
    i < a; i++) {
        if (a % i == 0) {
            result += f (a / i, i);
        }
    }
    return result;
}

int main () {
    int n, a;
    cin >> n;
    while (cin >> a) {
        cout << f (a, 2) << endl;
    }
    return 0;
}

