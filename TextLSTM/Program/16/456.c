int main () {
    int n, a [4];
    cin >> n;
    if (n == 10000)
        cout << "00001" << endl;
    else {
        a[1] = n / 1000;
        a[2] = (n - 1000 * a[1]) / 100;
        a[3] = (n - 1000 * a[1] - 100 * a[2]) / 10;
        a[4] = (n - 1000 * a[1] - 100 * a[2] - 10 * a[3]);
    }
    if (a[1] != 0)
        cout << a[4] << a[3] << a[2] << a[1] << endl;
    else {
        if (a[2] != 0)
            cout << a[4] << a[3] << a[2] << endl;
        else {
            if (a[3] != 0)
                cout << a[4] << a[3] << endl;
            else
                cout << a[4] << endl;
        }
    }
    return 0;
}

