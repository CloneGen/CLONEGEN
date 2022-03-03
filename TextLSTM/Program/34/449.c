int main () {
    int n = 0;
    int m = 0;
    cin >> n;
    if (n == 1)
        cout << "End" << endl;
    else {
        do {
            if (n % 2 == 1) {
                m = n;
                n = n * 3 + 1;
                cout << m << "*" << 3 << "+" << 1 << "=" << n << endl;
            }
            else {
                m = n;
                n = m / 2;
                cout << m << "/" << 2 << "=" << n << endl;
            }
        }
        while (n != 1);
        cout << "End" << endl;
    }
    return 0;
}

