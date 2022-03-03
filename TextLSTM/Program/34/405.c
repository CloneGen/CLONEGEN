void f (int n);

int main () {
    int n;
    cin >> n;
    f (n);
    return 0;
}

void f (int n) {
    int m;
    if (n == 1)
        cout << "End";
    else {
        if (n % 2 == 0) {
            m = n / 2;
            cout << n << "/" << 2 << "=" << m << endl;
        }
        else {
            m = 3 * n + 1;
            cout << n << "*" << 3 << "+" << 1 << "=" << m << endl;
        }
        f (m);
    }
    return;
}

