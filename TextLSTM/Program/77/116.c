int main () {
    char kid [300];
    cin >> kid;
    int line = strlen (kid);
    int i, j;
    char boy = kid[0];
    char girl = kid[line - 1];
    for (i = 0; i < line; i++) {
        if (kid[i] == boy)
            continue;
        else if (kid[i] == girl) {
            for (j = i - 1; j >= 0; j--) {
                if (kid[j] == boy) {
                    cout << j << ' ' << i << endl;
                    kid[i] = ' ';
                    kid[j] = ' ';
                    break;
                }
            }
        }
    }
    return 0;
}

