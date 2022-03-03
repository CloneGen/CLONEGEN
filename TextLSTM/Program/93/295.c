int main () {
    int n, s;
    cin >> n;
    s = 0;
    if (n % 3 == 0) {
        s = s + 1;
        cout << "3";
    }
    if (n % 5 == 0) {
        if (s >= 1)
            cout << " ";
        s = s + 1;
        cout << "5";
    }
    if (n % 7 == 0) {
        if (s >= 1)
            cout << " ";
        s = s + 1;
        cout << "7";
    }
    if (s == 0)
        cout << "n" << endl;
    return 0;
}

