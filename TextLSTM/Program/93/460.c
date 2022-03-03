int main () {
    int a, p;
    cin >> a;
    p = 0;
    if (a % 3 == 0) {
        cout << "3";
        p = p + 1;
    }
    if (a % 5 == 0) {
        if (p > 0) {
            cout << " 5";
        }
        else {
            cout << "5";
        }
        p = p + 1;
    }
    if (a % 7 == 0) {
        if (p > 0) {
            cout << " 7";
        }
        else {
            cout << "7";
        }
        p = p + 1;
    }
    if (p == 0) {
        cout << "n";
    }
    cout << endl;
    return 0;
}

