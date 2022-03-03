char a [40] = {0}, b [40] = {0};
int num = 0;
int linelen = 0;

int main () {
    int n, k, cnt = 0;
    cin >> n;
    cin >> b;
    cout << b;
    k = strlen (b);
    linelen = k;
    while (true) {
        cin >> a;
        num = strlen (a);
        if (linelen == 0) {
            {
                cout << endl << a;
                cnt++;
                linelen = linelen + num;
            }
        }
        else {
            if (num + linelen + 1 > 80) {
                cout << endl << a;
                cnt++;
                linelen = num;
            }
            else {
                if (num + linelen + 1 == 80) {
                    cout << " " << a;
                    cnt++;
                    linelen = 0;
                }
                else {
                    cout << " " << a;
                    cnt++;
                    linelen = linelen + num + 1;
                }
            }
            if (cnt == n - 1)
                break;
        }
    }
    return 0;
}

