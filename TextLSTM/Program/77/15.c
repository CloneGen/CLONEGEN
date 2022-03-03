int paidui (int i, char a [110], int l) {
    int j;
    if (a[i] == a[0] && i < l) {
        j = paidui (i + 1, a, l);
        cout << i << " " << j << endl;
        return paidui (j + 1, a, l);
    }
    else if (a[i] != a[0] && i < l)
        return i;
}

int main () {
    int l;
    char a [110];
    cin.getline (a, 110);
    l = strlen (a);
    paidui (0, a, l);
    return 0;
}

