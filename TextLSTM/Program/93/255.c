int main () {
    int n;
    cin >> n;
    if (n % 3 == 0) {
        if (n % 5 != 0 && n % 7 != 0)
            cout << '3';
        else
            cout << '3' << ' ';
    }
    if (n % 5 == 0) {
        if (n % 7 != 0)
            cout << '5';
        else
            cout << '5' << ' ';
    }
    if (n % 7 == 0)
        cout << '7' << endl;
    if (n % 3 != 0 && n % 5 != 0 && n % 7 != 0)
        cout << 'n' << endl;
    return 0;
}

