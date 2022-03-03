int main () {
    int n, a, b;
    cin >> n;
    while (n != 1) {
        if (n % 2 == 0) {
            a = n / 2;
            cout << n << "/" << "2" << "=" << a << endl;
            n = a;
        }
        else {
            b = n * 3 + 1;
            cout << n << "*" << "3" << "+" << "1" << "=" << b << endl;
            n = b;
        }
    }
    cout << "End" << endl;
    return 0;
}

