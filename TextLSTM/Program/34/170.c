int cal (int n) {
    if (n == 1)
        cout << "End" << endl;
    else if (n % 2 == 0) {
        cout << n << "/2=" << (n / 2) << endl;
        return cal (n / 2);
    }
    else {
        cout << n << "*3+1=" << (3 * n + 1) << endl;
        return cal (3 * n + 1);
    }
}

int main () {
    int n, m;
    cin >> n;
    m = cal (n);
    return 0;
}

