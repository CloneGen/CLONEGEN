int ji (int m) {
    cout << m << '*' << 3 << '+' << 1;
    m = m * 3 + 1;
    cout << '=' << m << endl;
    return m;
}

int ou (int m) {
    cout << m << '/' << 2;
    m = m / 2;
    cout << '=' << m << endl;
    return m;
}

int main () {
    int n;
    cin >> n;
    while (n != 1) {
        if ((n % 2) == 1) {
            n = ji (n);
        }
        else {
            n = ou (n);
        }
    }
    cout << "End" << endl;
    return 0;
}

