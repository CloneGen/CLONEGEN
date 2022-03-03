int main () {
    char sen [20] [100], ori [100], exc [100], c;
    int i = 0, j;
    do {
        cin >> sen[i];
        i++;
    }
    while ((c = getchar ()) != '\n');
    cin >> ori;
    cin >> exc;
    for (j = 0; j < i; j++) {
        if (strcmp (sen[j], ori) == 0)
            strcpy (sen[j], exc);
    }
    for (j = 0; j < i - 1; j++) {
        cout << sen[j] << ' ';
    }
    cout << sen[i - 1];
    return 0;
}

