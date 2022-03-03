int main () {
    char sentence [100000];
    int n, i, len, character [26];
    cin >> n;
    while (n--) {
        for (i = 0; i <= 25; i++)
            character[i] = 0;
        cin >> sentence;
        len = strlen (sentence);
        for (i = 0; i <= len - 1; i++)
            character[(int) (sentence[i] - 'a')]++;
        for (i = 0; i <= len - 1; i++) {
            if (character[(int) (sentence[i] - 'a')] == 1) {
                cout << sentence[i] << endl;
                break;
            }
        }
        if (i == len)
            cout << "no" << endl;
    }
    return 0;
}

