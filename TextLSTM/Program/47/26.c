void p (int n) {
    int c;
    cin >> c;
    if (n != 1)
        p (n - 1);
    if (n == 1)
        cout << c;
    else
        cout << ' ' << c;
}

int main () {
    int n;
    cin >> n;
    p (n);
    cout << endl;
    return 0;
}

