int v (int n) {
    if (n == 1)
        cout << "End";
    else if (n % 2 == 1) {
        cout << n << "*3+1=" << n * 3 + 1 << endl;
        if (n * 3 + 1 == 1)
            cout << "End";
        else
            return v (n * 3 + 1);
    }
    if (n % 2 == 0) {
        cout << n << "/2=" << n / 2 << endl;
        if (n / 2 == 1)
            cout << "End";
        else
            return v (n / 2);
    }
}

int main () {
    int a;
    cin >> a;
    v (a);
}

