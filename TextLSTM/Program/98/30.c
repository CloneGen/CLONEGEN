int main () {
    char word [503] [40];
    int sum = 0, n;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> *(word + i);
    }
    cout << *(word);
    sum = strlen (*word) + 1;
    for (int i = 1;
    i < n; i++) {
        sum = sum + strlen (*(word + i));
        if (sum <= 80) {
            cout << ' ';
            sum++;
        }
        else {
            cout << endl;
            sum = strlen (*(word + i)) + 1;
        }
        cout << *(word + i);
    }
    return 0;
}

