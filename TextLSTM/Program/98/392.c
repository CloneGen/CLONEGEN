int main () {
    char word [41];
    int sum = 0, n, t;
    cin >> n;
    t = n;
    while (n > 0) {
        scanf ("%s", word);
        if (n != t) {
            if ((sum + strlen (word)) <= 80) {
                cout << " ";
            }
            if ((sum + strlen (word)) > 80) {
                cout << endl, sum = 0;
            }
        }
        sum = sum + strlen (word);
        cout << word;
        memset (word, 0, sizeof (word));
        n--;
        sum++;
    }
    return 0;
}

