char boy, girl;
int n = 100;
char queue [100];
int num [100];

void couple (char a [100], int b [100]) {
    int i;
    for (i = 0; i < n; i++) {
        if ((a[i] == boy) && (a[i + 1] == girl)) {
            cout << b[i] << " " << b[i + 1] << endl;
            for (int j = i;
            j < n - 2; j++) {
                a[j] = a[j + 2];
                b[j] = b[j + 2];
            }
            n -= 2;
            couple (queue, num);
        }
    }
}

int main () {
    int i;
    cin >> queue;
    boy = queue[0];
    for (i = 0; queue[i] != 0; i++) {
        num[i] = i;
    }
    for (i = 0; i < n; i++) {
        if (queue[i] != queue[0]) {
            girl = queue[i];
            break;
        }
    }
    couple (queue, num);
    return 0;
}

