int main () {
    char ch [100];
    int i, j;
    cin.get (ch, 100, '\n');
    for (i = 0; i <= 100; i++) {
        if (ch[i] == ' ' && ch[i + 1] == ' ') {
            for (j = i; j <= 100; j++) {
                ch[j] = ch[j + 1];
            }
        }
        else
            ch[i] = ch[i];
    }
    cout << ch << endl;
    return 0;
}

