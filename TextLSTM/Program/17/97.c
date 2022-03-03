int main () {
    char line [101], label [101];
    int pos [100];
    int left = 0, right = 0;
    int pos_i, len;
    int i;
    while (cin.getline (line, 101)) {
        pos_i = -1, left = 0;
        right = 0;
        len = strlen (line);
        for (i = 0; i < 100; i++)
            label[i] = ' ';
        for (i = 0; line[i] != '\0'; i++) {
            if (line[i] == '(') {
                pos[++pos_i] = i;
                left++;
            }
            if (line[i] == ')')
                if (left <= right)
                    label[i] = '?';
                else {
                    right++;
                    pos_i--;
                }
        }
        if (pos_i >= 0) {
            for (i = 0; i <= pos_i; i++)
                label[pos[i]] = '$';
        }
        label[len] = '\0';
        cout << line << endl;
        cout << label << endl;
    }
    return 0;
}

