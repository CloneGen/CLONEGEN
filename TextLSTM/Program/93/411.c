int main () {
    int n = 0, a [3] = {3, 5, 7};
    cin >> n;
    if ((n % 3 != 0 && n % 5 != 0) && n % 7 != 0) {
        cout << "n";
    }
    else {
        if (n % 7 == 0) {
            for (int i = 0;
            i < 2; i++) {
                if (n % a[i] == 0)
                    cout << a[i] << " ";
            }
            cout << 7;
        }
        else if (n % 5 == 0) {
            if (n % 3 == 0)
                cout << a[0] << " " << a[1];
            else
                cout << a[1];
        }
        else
            cout << a[0];
    }
    return 0;
}

