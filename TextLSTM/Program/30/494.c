int main () {
    int n;
    int result = 0;
    cin >> n;
    for (int i = n;
    i >= 1; i--) {
        if (i % 10 == 7) {
            continue;
        }
        if ((i - 70) >= 0 && (i - 70) <= 9) {
            continue;
        }
        if (i % 7 == 0) {
            continue;
        }
        result = result + i * i;
    }
    cout << result << endl;
    return 0;
}

