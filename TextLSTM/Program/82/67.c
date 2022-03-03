int main () {
    int m1, high, low, i, h, n;
    cin >> n;
    m1 = 0;
    for (i = 0; i < n;) {
        h = 0;
        while (cin >> high >> low) {
            i = i + 1;
            if ((high >= 90) && (high <= 140) && (low >= 60) && (low <= 90)) {
                h = h + 1;
            }
            else if ((high < 90) || (high > 140) || (low < 60) || (low > 90)) {
                break;
            }
            if (h > m1)
                m1 = h;
        }
    }
    cout << m1 << endl;
    return 0;
}

