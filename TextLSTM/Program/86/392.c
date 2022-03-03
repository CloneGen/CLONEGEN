int main () {
    int n, m, i, count, count0;
    cin >> n;
    for (; n > 0; n--) {
        cin >> m;
        count0 = 60;
        for (i = 1; i <= m; i++) {
            cin >> count;
            if (count < count0 - 3) {
                count0 -= 3;
            }
            else if (count < count0 && count >= count0 - 3) {
                count0 = count;
            }
        }
        cout << count0 << endl;
    }
    return 0;
}

