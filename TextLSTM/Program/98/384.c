int main () {
    char word [40];
    int n, sum = 0;
    int i;
    int first = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        scanf ("%s", word);
        sum = sum + (strlen (word)) +1;
        if (sum <= 81) {
            if (first == 0) {
                cout << word;
                first = 1;
            }
            else {
                cout << " " << word;
            }
        }
        else {
            first = 0;
            cout << endl << word << " ";
            sum = strlen (word) + 1;
        }
    }
    return 0;
}

