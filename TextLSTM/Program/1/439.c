int sum = 1;

void f (int b, int a) {
    for (int i = b;
    i <= a; i++) {
        if ((a % i == 0) && (i <= a / i)) {
            sum = sum + 1;
            f (i, a / i);
        }
        if (i > a / i)
            break;
    }
}

int main () {
    int a, n;
    cin >> n;
    while (n > 0) {
        cin >> a;
        sum = 1;
        f (2, a);
        cout << sum << endl;
        n--;
    }
    return 0;
}

