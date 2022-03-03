int main () {
    int n, i;
    int a [200];
    cin >> n;
    a[0] = n;
    for (i = 0; a[i] != 1; i++) {
        if (a[i] % 2 == 0) {
            cout << a[i] << "/2=" << a[i] / 2 << endl;
            a[i + 1] = a[i] / 2;
        }
        else {
            cout << a[i] << "*3+1=" << 3 * a[i] + 1 << endl;
            a[i + 1] = 3 * a[i] + 1;
        }
    }
    cout << "End" << endl;
    return 0;
}

