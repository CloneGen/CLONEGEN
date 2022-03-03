int main () {
    int x, y, a [5], counter, i = 0;
    cin >> x;
    do {
        y = x / 10;
        a[i] = x - y * 10;
        counter = i;
        i++;
        x = y;
        y = x * 10;
    }
    while (y / 10 > 0);
    for (i = 0; i <= counter; i++)
        cout << a[i];
    return 0;
}

