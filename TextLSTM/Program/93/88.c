int main () {
    int a;
    int x;
    x = 0;
    cin >> a;
    if (a % 3 == 0) {
        x = 1;
        cout << 3;
    };
    if (a % 5 == 0) {
        {
            if (x == 1)
                cout << " ";
        }
        x = 1;
        cout << 5;
    };
    if (a % 7 == 0) {
        {
            if (x == 1)
                cout << " ";
        }
        cout << 7;
    };
    if (a % 3 != 0 && a % 5 != 0 && a % 7 != 0)
        cout << 'n' << endl;
    return 0;
}

