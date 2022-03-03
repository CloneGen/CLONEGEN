int main () {
    int m [] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30}, w, i;
    cin >> w;
    w = (w + 12) % 7;
    if (w == 5)
        cout << "1" << endl;
    for (i = 1; i <= 11; i++) {
        w = (w + m[i] % 7) % 7;
        if (w == 5)
            cout << i + 1 << endl;
    }
    return 0;
}

