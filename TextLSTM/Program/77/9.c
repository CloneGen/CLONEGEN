void match (char child [], int l) {
    for (int i = 0;
    i <= l; i++)
        if (child[i] == child[0]) {
            for (int j = i + 1;
            j <= l; j++) {
                if (child[j] == child[0])
                    break;
                else if (child[j] != child[0] && child[j] != '\0') {
                    child[i] = child[j] = '\0';
                    cout << i << " " << j << endl;
                    match (child, l);
                }
            }
        }
    return;
}

int main () {
    char child [101];
    cin.getline (child, 101);
    match (child, strlen (child));
    return 0;
}

