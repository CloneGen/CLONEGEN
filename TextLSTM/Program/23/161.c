char words [110] [110];

int main () {
    int i;
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
    for (i = n - 1; i >= 0; i--) {
        cout << words[i];
        if (i)
            cout << ' ';
    }
    cout << endl;
    return 0;
}

