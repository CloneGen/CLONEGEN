char m [100];
int num = 0;
char boy, girl;
int len;

void search (int start) {
    if (num == len / 2) {
        return;
    }
    int i, t;
    for (i = start; i < len; i++) {
        if (m[i] == girl) {
            for (t = i - 1; t >= 0; t--) {
                if (m[t] == boy) {
                    num++;
                    m[t] = '.';
                    break;
                }
            }
            break;
        }
    }
    cout << t << " " << i << endl;
    search (i + 1);
}

int main () {
    cin >> m;
    len = strlen (m);
    boy = m[0];
    girl = m[len - 1];
    search (0);
    return 0;
}

