int n, ans, cnt, a, b;

int main () {
    cin >> n;
    ans = 0;
    cnt = 0;
    while (n--) {
        cin >> a >> b;
        if (a >= 90 && a <= 140 && b >= 60 && b <= 90)
            cnt++;
        else {
            if (cnt > ans)
                ans = cnt;
            cnt = 0;
        }
    }
    if (cnt > ans)
        ans = cnt;
    cout << ans << endl;
    return 0;
}

