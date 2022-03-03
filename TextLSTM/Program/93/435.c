int main () {
    int N, x = 3, y = 5, z = 7;
    char n = 'n';
    cin >> N;
    if (N % 3 == 0) {
        if (N % 5 == 0 && N % 7 == 0) {
            cout << x << ' ' << y << ' ' << z << endl;
        }
        else if (N % 5 == 0 && N % 7 != 0) {
            cout << x << ' ' << y << endl;
        }
        else if (N % 5 != 0 && N % 7 == 0) {
            cout << x << ' ' << z << endl;
        }
        else {
            cout << x << endl;
        }
    }
    else if (N % 5 == 0 && N % 7 == 0) {
        cout << y << ' ' << z << endl;
    }
    else if (N % 5 == 0 && N % 7 != 0) {
        cout << y << endl;
    }
    else if (N % 5 != 0 && N % 7 == 0) {
        cout << z << endl;
    }
    else {
        cout << n << endl;
    }
    return 0;
}

