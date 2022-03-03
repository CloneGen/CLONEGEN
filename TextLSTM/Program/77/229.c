char g_str [1000];
int g_num [1000] = {0};
void rank (int m);

int main () {
    int length, i;
    cin.getline (g_str, 1000);
    length = strlen (g_str);
    for (i = 0; i <= length; i++)
        g_num[i] = i;
    rank (length);
    return 0;
}

void rank (int m) {
    int i, j;
    if (m == 0)
        return;
    else {
        for (i = 0; i < m; i++) {
            if (g_str[i] != g_str[i + 1]) {
                cout << g_num[i] << ' ' << g_num[i + 1] << endl;
                for (j = i; j <= m - 2; j++) {
                    g_str[j] = g_str[j + 2];
                    g_num[j] = g_num[j + 2];
                }
                break;
            }
        }
        rank (m - 2);
    }
}

