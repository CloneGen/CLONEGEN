int cnt_row (int a);

int main () {
    int x, y, i, p;
    cin >> x >> y;
    if (x < y) {
        int temp;
        temp = x;
        x = y;
        y = temp;
    }
    p = cnt_row (x) - cnt_row (y);
    for (i = 0; i < p; i++)
        x = x / 2;
    while (x != y) {
        if (x % 2 == 0)
            x = x / 2;
        else
            x = (x - 1) / 2;
        if (y % 2 == 0)
            y = y / 2;
        else
            y = (y - 1) / 2;
    }
    cout << x;
    return 0;
}

int cnt_row (int a) {
    int cnt = 0;
    while (a != 0) {
        a = a / 2;
        cnt++;
    }
    return cnt;
}

