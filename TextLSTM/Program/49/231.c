int i, l;
char str [501];

void f (int num, int len) {
    if (len <= 0) {
        int j;
        for (j = i; j < i + l; j++)
            cout << str[j];
        cout << endl;
    }
    else {
        if (str[num] == str[num + len - 1])
            f (num + 1, len - 2);
    }
}

int main () {
    int lenth;
    cin.getline (str, 501);
    lenth = strlen (str);
    for (l = 2; l < lenth; l++)
        for (i = 0; i + l - 1 <= lenth; i++)
            f (i, l);
    return 0;
}

