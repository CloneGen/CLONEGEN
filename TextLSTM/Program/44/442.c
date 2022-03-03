char n [10];
void type0 ();
void typefu ();
void typezh ();

int main () {
    int i = 0, j = 0;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 10; j++) {
            n[j] = '\0';
        }
        cin.getline (n, 10);
        if (n[0] == '0' || (n[1] == '0' && n[0] == '-')) {
            type0 ();
        }
        else if (n[0] == '-') {
            typefu ();
        }
        else {
            typezh ();
        }
    }
    return 0;
}

void type0 () {
    cout << 0 << endl;
}

void typefu () {
    int len = 0;
    int i = 0;
    len = strlen (n);
    for (; len >= 1; len--) {
        if (n[len - 1] != '0') {
            break;
        }
    }
    cout << n[0];
    for (i = len - 1; i >= 1; i--) {
        cout << n[i];
    }
    cout << endl;
}

void typezh () {
    int len = 0;
    int i = 0;
    len = strlen (n);
    for (; len >= 1; len--) {
        if (n[len - 1] != '0') {
            break;
        }
    }
    for (i = len - 1; i >= 0; i--) {
        cout << n[i];
    }
    cout << endl;
}

