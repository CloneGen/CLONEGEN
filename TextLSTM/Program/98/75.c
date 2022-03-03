int main () {
    int n, i, num = 0;
    char str [1000] [40];
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> str[i];
    for (i = 0; i < n - 1; i++) {
        num += strlen (*(str + i));
        if (num + 1 + strlen (*(str + i + 1)) <= 80) {
            cout << *(str + i) << " ";
            num++;
        }
        else if ((num <= 80) && (num + 1 + strlen (*(str + i + 1)) > 80)) {
            cout << *(str + i);
            num++;
        }
        else {
            cout << endl;
            i--;
            num = 0;
        }
    }
    cout << *(str + n - 1) << endl;
    return 0;
}

