int main () {
    char a [1000] [50];
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> *(a + i);
    long sum = 0;
    for (i = 0; i < n; i++) {
        if (sum + strlen (*(a + i)) + 1 > 80) {
            cout << endl << *(a + i);
            sum = strlen (*(a + i));
            continue;
        }
        sum += strlen (*(a + i)) + 1;
        if (i == 0) {
            cout << *(a + i);
            sum--;
            continue;
        }
        cout << ' ' << *(a + i);
    }
    return 0;
}

