char words [110] [110];
char tempword [60];

int main () {
    int i, j, k;
    int n;
    char c;
    i = 0;
    while (cin >> words[i]) {
        i++;
        c = cin.get ();
        if (c == '\n')
            break;
    }
    n = i;
    for (i = 0; i < n; i++) {
        cout << words[i];
        if (i < n - 1)
            cout << ' ';
    }
    cout << endl;
    return 0;
}

