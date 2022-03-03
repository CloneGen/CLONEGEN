int sushu (int n) {
    for (int i = 2;
    i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
            break;
        }
    }
    return 1;
}

int main () {
    int m, a;
    cin >> m;
    for (a = 3; a <= m / 2; a = a + 2) {
        if (sushu (a) && sushu (m - a))
            cout << a << " " << m - a << endl;
    }
    return 0;
}

