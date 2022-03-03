int c [100] = {0};
char boy, girl;
char a [100];

void f () {
    int k = 1, i;
    for (i = 0; i < strlen (a); i++) {
        if (a[i] == boy && c[i] == 0) {
            while (c[i + k] == 1) {
                k++;
            }
            if (a[i + k] == girl) {
                cout << i << ' ' << i + k << endl;
                c[i] = 1;
                c[i + k] = 1;
                break;
            }
            else {
                k = 1;
                continue;
            }
        }
    }
    if (i + k < strlen (a) - 1)
        f ();
}

int main () {
    cin.getline (a, 100);
    boy = a[0];
    girl = a[strlen (a) - 1];
    f ();
    return 0;
}

