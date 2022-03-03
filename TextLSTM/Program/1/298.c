int f (int a, int min);

int main () {
    int n, i, a, A [100];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a;
        A[i] = f (a, 2);
    };
    for (i = 0; i < n; i++)
        cout << A[i] << endl;
    return 0;
}

int f (int a, int min) {
    int result = 1;
    int i;
    if (a < min) {
        return 0;
    }
    for (i = min; i < a; i++) {
        if (a % i == 0) {
            result += f (a / i, i);
        }
    }
    return result;
}

