int main () {
    int t, a, b, c;
    cin >> t;
    a = (t % 3 == 0), b = (t % 5 == 0), c = (t % 7 == 0);
    if (a + b + c == 0) {
        cout << "n" << endl;
    }
    if (a + b + c == 1) {
        if (a == 1) {
            cout << "3" << endl;
        }
        else if (b == 1) {
            cout << "5" << endl;
        }
        else {
            cout << "7" << endl;
        }
    }
    if (a + b + c == 2) {
        if (a == 0) {
            cout << "5 7" << endl;
        }
        else if (b == 0) {
            cout << "3 7" << endl;
        }
        else {
            cout << "3 5" << endl;
        }
    }
    if (a + b + c == 3) {
        cout << "3 5 7" << endl;
    }
    return 0;
}

