int main () {
    char sen [101];
    int len;
    cin.getline (sen, 101, '\n');
    len = strlen (sen);
    for (int i = 0;
    i < len; i++)
        if (sen[i] == ' ') {
            int j = i + 1;
            while (sen[j] == ' ')
                j++;
            for (int k = j;
            k < 101; k++)
                sen[k - j + i + 1] = sen[k];
        }
    cout << sen;
    return 0;
}

