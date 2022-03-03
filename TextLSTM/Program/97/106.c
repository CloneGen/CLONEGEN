int main () {
    int a [6], i, b;
    cin >> b;
    a[0] = floor (b / 100);
    b = b - a[0] * 100;
    a[1] = floor (b / 50);
    b = b - a[1] * 50;
    a[2] = floor (b / 20);
    b = b - a[2] * 20;
    a[3] = floor (b / 10);
    b = b - a[3] * 10;
    a[4] = floor (b / 5);
    b = b - a[4] * 5;
    a[5] = b;
    for (i = 0; i < 6; i++) {
        cout << a[i] << endl;
    }
    return 0;
}

