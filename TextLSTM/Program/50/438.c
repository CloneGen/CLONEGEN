int main () {
    int a [12] = {12, 43, 71, 102, 132, 163, 193, 224, 255, 285, 316, 346};
    int b [12], i, w;
    cin >> w;
    for (i = 0; i < 12; i++) {
        b[i] = a[i] % 7 + w;
        if (b[i] > 7) {
            b[i] = b[i] - 7;
        }
        if (b[i] == 5) {
            cout << i + 1 << endl;
        }
    }
    return 0;
}

