int main () {
    int n;
    cin >> n;
    while (n > 1) {
        switch (n % 2) {
        case 0 :
            n = n / 2;
            cout << n * 2 << "/" << 2 << "=" << n << endl;
            break;
        case 1 :
            n = n * 3 + 1;
            cout << (n - 1) / 3 << "*" << 3 << "+" << 1 << "=" << n << endl;
            break;
        }
    }
    cout << "End";
    return 0;
}

