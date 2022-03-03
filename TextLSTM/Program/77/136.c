const  int BOY = 1;
const  int GIRL = 2;
const  int NONE = 0;
int line [100] = {NONE};
int n = 0;

void leave () {
    int last = -1;
    for (int i = 0;
    i < n; i++) {
        if (line[i] == BOY)
            last = i;
        if (line[i] == GIRL &&last >= 0) {
            line[i] = line[last] = NONE;
            cout << last << ' ' << i << endl;
            leave ();
        }
    }
}

int main () {
    char boy, c;
    boy = getchar ();
    line[0] = BOY;
    n++;
    for (;;) {
        c = getchar ();
        if (c == '\n')
            break;
        n++;
        if (c == boy)
            line[n - 1] = BOY;
        else
            line[n - 1] = GIRL;
    }
    leave ();
    return 0;
}

