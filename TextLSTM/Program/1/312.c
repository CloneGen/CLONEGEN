int a = 2;
int result = 0;
void function (int, int);

int main () {
    int n = 0;
    int data = 0;
    int i = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> data;
        function (data, a);
        cout << result << endl;
        result = 0;
    }
    return 0;
}

void function (int x, int y) {
    int j = 0;
    if (x == 1) {
        result = result + 1;
    }
    for (j = y; j <= x; j++) {
        if (x % j == 0) {
            function (x / j, j);
        }
    }
}

