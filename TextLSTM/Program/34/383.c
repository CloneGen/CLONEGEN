int f (int);

int main () {
    int n;
    cin >> n;
    if (n == 1)
        cout << "End" << endl;
    else
        for (int i = 0;
        i < 1000; i++) {
            n = f (n);
            if (n == 1) {
                cout << "End" << endl;
                break;
            }
        }
    return 0;
}

int f (int n) {
    if (n % 2 == 0) {
        cout << n << "/" << 2 << "=" << n / 2 << endl;
        return n / 2;
    }
    else {
        cout << n << "*" << 3 << "+" << 1 << "=" << n * 3 + 1 << endl;
        return n * 3 + 1;
    }
}

