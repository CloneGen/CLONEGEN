int main () {
    char origin [501];
    int len, i, j, k, lenmax;
    int flag;
    cin.getline (origin, 501);
    lenmax = strlen (origin);
    for (len = 2; len <= lenmax; len++) {
        for (i = 0; i <= lenmax - len; i++) {
            flag = 1;
            for (j = 0; j <= len / 2; j++) {
                if (origin[i + j] != origin[i + len - j - 1]) {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                for (k = i; k <= i + len - 1; k++)
                    cout << origin[k];
                cout << endl;
            }
        }
    }
    return 0;
}

