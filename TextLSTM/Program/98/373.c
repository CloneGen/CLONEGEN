int main () {
    int n1, max = 0, i;
    cin >> n1;
    const  int n = n1;
    char word [n + 1] [41];
    int len [n + 1];
    for (i = 1; i <= n; i++) {
        scanf ("%s", word[i]);
        len[i + 1] = 0;
        len[i] = strlen (word[i]);
    }
    for (i = 1; i <= n; i++) {
        max = max + len[i];
        if (max <= 80 && max + len[i + 1] + 1 <= 80 && i != n) {
            cout << word[i] << " ";
            max++;
        }
        else if (max <= 80 && max + len[i + 1] + 1 > 80 && i != n) {
            cout << word[i] << endl;
            max = 0;
        }
        else
            cout << word[i];
    }
}

