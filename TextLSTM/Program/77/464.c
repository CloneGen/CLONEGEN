int num (char a []);
int judge (char a []);
int leave (int n, char a [], char b, char g);

int main () {
    char a [105] = {0};
    char boy, girl;
    cin.getline (a, 101);
    int n;
    n = num (a);
    boy = a[0];
    girl = a[judge (a)];
    leave (n, a, boy, girl);
    return 0;
}

int num (char a []) {
    int n = 0;
    for (int i = 0;
    a[i] != 0; i++)
        n = i;
    return n + 1;
}

int judge (char a []) {
    int flag = 0;
    for (int i = 1;
    ; i++)
        if (a[i] != a[i - 1]) {
            flag = i;
            break;
        }
    return flag;
}

int leave (int n, char a [105], char b, char g) {
    while (1) {
        int flag = -1, flag1, flag2 = 0;
        for (int i = 0;
        i < n; i++) {
            if (a[i] == b && a[i + 1] == g) {
                cout << i << " " << i + 1 << endl;
                a[i] = 0;
                a[i + 1] = 0;
                flag1 = i;
                flag2 = i + 1;
                break;
            }
            else if (a[i] == b && a[i + 1] == 0)
                flag = i;
            else if (a[i] == g && flag >= 0) {
                cout << flag << " " << i << endl;
                a[i] = 0;
                a[flag] = 0;
                flag1 = flag;
                flag = -1;
                flag2 = i;
                break;
            }
        }
        if ((flag1 == 0) && (flag2 == (n - 1)))
            break;
    }
    return 0;
}

