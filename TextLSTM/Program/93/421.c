int main () {
    int n, a = 0;
    cin >> n;
    if ((n % 3 != 0) && (n % 5 != 0) && (n % 7 != 0))
        cout << "n" << endl;
    else {
        if (n % 3 == 0) {
            cout << "3";
            a = 1;
        }
        if (n % 5 == 0) {
            if (a == 1)
                cout << " ";
            cout << "5";
            a = 1;
        }
        if (n % 7 == 0) {
            if (a == 1)
                cout << " ";
            cout << "7";
        }
    }
    return 0;
}

