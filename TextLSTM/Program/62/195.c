int main () {
    char in [10001] = {0};
    int i, len;
    cin.get (in, 1000);
    len = strlen (in);
    for (i = 0; i <= len - 1; i++) {
        if ((in[i] == ' ') && (in[i + 1] == ' '))
            continue;
        cout << in[i];
    }
    return 0;
}

