int main () {
    char a [101] = {'\0'};
    int i = 1, j = 0;
    cin.getline (a, 101, '\n');
    while ((i < 101) && (a[i] != '\0')) {
        if (a[i] == a[0]) {
            i++;
            continue;
        }
        else if (a[i] != a[0]) {
            for (j = i - 1; j >= 0; j--) {
                if (a[j] != a[0])
                    continue;
                else if (a[j] == a[0]) {
                    cout << j << " " << i << endl;
                    a[i] = '0';
                    a[j] = '0';
                    break;
                }
            }
        }
        i++;
    }
    return 0;
}

