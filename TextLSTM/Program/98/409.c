int main () {
    int n;
    cin >> n;
    int i, j, k;
    char s [10000] [40];
    int sum = 0;
    for (i = 0; i < n; i++) {
        cin >> *(s + i);
    }
    for (i = 0; i < n; i++) {
        if (sum == 0) {
            cout << *(s + i);
            sum = strlen (*(s + i));
        }
        else if (sum + strlen (*(s + i)) + 1 <= 80) {
            cout << " " << *(s + i);
            sum = sum + strlen (*(s + i)) + 1;
        }
        else {
            cout << endl;
            cout << *(s + i);
            sum = strlen (*(s + i));
        }
    }
    return 0;
}

