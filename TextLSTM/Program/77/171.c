char boy;
char girl;
int mark [10000];
int currentmark;

void f (int p) {
    char temp;
    if (p == 0) {
        cin >> boy;
        mark[0] = -1;
        f (1);
    }
    else {
        cin >> temp;
        if (temp != boy)
            girl = temp;
        if (temp == boy) {
            mark[p] = p;
            currentmark = mark[p];
            f (p + 1);
        }
        else if (temp == girl) {
            cout << currentmark << " " << p << endl;
            int i = p;
            while (1) {
                if (mark[i] == 0)
                    i--;
                else
                    break;
            }
            mark[i] = 0;
            while (1) {
                if (mark[i] == 0)
                    i--;
                else
                    break;
            }
            currentmark = mark[i];
            if (currentmark == -1)
                currentmark = 0;
            if (i >= 0)
                f (p + 1);
        }
    }
}

int main () {
    f (0);
    return 0;
}

