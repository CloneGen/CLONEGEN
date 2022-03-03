char boy, girl;
int len = 0;

int main () {
    char a [100] = {0};
    cin >> a;
    len = strlen (a);
    boy = a[0];
    for (int i = 0;
    i < 100; i++) {
        if (a[i] != boy) {
            girl = a[i];
            break;
        }
    }
    for (int i = 0;
    i < len - 1; i++) {
        if (a[i] == girl) {
            for (int j = i - 1;
            j > 0; j--) {
                if (a[j] == boy) {
                    cout << j << " " << i << endl;
                    a[j] = '\0';
                    break;
                }
            }
        }
    }
    cout << 0 << " " << len - 1 << endl;
    return 0;
}

