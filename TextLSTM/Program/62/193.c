int main () {
    char words [128] [128], gt;
    int m;
    for (int i = 0;
    i < 128; i++) {
        cin >> words[i];
        gt = getchar ();
        if (gt == '\n') {
            m = i;
            break;
        }
    }
    for (int i = 0;
    i < m; i++)
        cout << words[i] << ' ';
    cout << words[m];
    return 0;
}

