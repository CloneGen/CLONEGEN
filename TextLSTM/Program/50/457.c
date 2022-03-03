int main () {
    int i, w, day [11] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    cin >> w;
    w = w - 1;
    w = (w + 12) % 7;
    if (w == 4)
        cout << 1 << endl;
    for (i = 0; i <= 10; i++) {
        w = (w + day[i]) % 7;
        if (w == 4)
            cout << i + 2 << endl;
    }
    return 0;
}

