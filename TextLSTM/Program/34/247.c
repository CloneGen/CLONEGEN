int main () {
    int n;
    cin >> n;
    if (n == 1) {
        cout << "End";
    }
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
            cout << 2 * n << "/2=" << n << endl;
        }
        else if (n % 2 != 0) {
            n = n * 3 + 1;
            cout << (n - 1) / 3 << "*3+1=" << n << endl;
        }
        if (n == 1) {
            cout << "End";
            break;
        }
    }
    return 0;
}

