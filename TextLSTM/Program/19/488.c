int main () {
    char Data [20] [20], Word_1 [20], Word_2 [20];
    int i, t;
    int get_data (char Data [20] [20]);
    t = get_data (Data);
    cin >> Word_1;
    cin >> Word_2;
    if (strcmp (Data[0], Word_1) == 0)
        strcpy (Data[0], Word_2);
    cout << Data[0];
    for (i = 1; i < t; i++) {
        if (strcmp (Data[i], Word_1) == 0)
            strcpy (Data[i], Word_2);
        cout << ' ' << Data[i];
    }
    return 0;
}

int get_data (char Data [20] [20]) {
    int i = 0, j = 0;
    char c;
    while ((c = getchar ()) != '\n') {
        if (c == ' ') {
            Data[i][j] = '\0';
            i++;
            j = 0;
            continue;
        }
        Data[i][j] = c;
        j++;
    }
    Data[i][j] = '\0';
    return i + 1;
}

