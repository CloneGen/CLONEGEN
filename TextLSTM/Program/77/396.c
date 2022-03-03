int main () {
    char a [100000];
    char b, c;
    int i, pos [100000], pos_i = -1, left = 0;
    cin.getline (a, 100000);
    for (i = 0; a[i] != '\0'; i++) {
        b = a[0];
        if (a[i] != a[0]) {
            c = a[i];
            break;
        }
    }
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] == b && a[i + 1] == c) {
            cout << i << ' ' << i + 1 << endl;
            i++;
        }
        else if (a[i] == b && a[i + 1] == b) {
            pos[++pos_i] = i;
            left++;
        }
        else if (a[i] == c && left > 0) {
            cout << pos[pos_i] << ' ' << i << endl;
            pos_i--;
            left--;
        }
    }
    return 0;
}

