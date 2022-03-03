char p [30];
int l, i, j, t [30];

int main () {
    cin.getline (p, 31);
    l = strlen (p);
    for (i = 0; i < l; i++) {
        *(t + i) = *(p + i);
        if (*(t + i) < 58 && *(t + i) >= 48) {
            if (*(t + i - 1) != 45)
                *(t + i) = *(t + i) - 48;
        }
        else {
            *(t + i) = 32;
        }
    }
    i = 0;
    while (i < l) {
        if (*(t + i) != 32) {
            cout << *(t + i);
        }
        else if (*(t + i) == 32) {
            cout << endl;
            for (j = i; j < l; j++) {
                if (*(t + j) != 32) {
                    i = j - 1;
                    break;
                }
            }
        }
        i = i + 1;
    }
    return 0;
}

