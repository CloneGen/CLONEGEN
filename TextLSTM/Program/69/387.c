struct  Addlist {
    int n;
    int *element;
};
typedef struct  Addlist *ablist;

ablist creatalist (void) {
    ablist alist = (ablist) malloc (sizeof (struct  Addlist));
    if (alist != NULL) {
        alist->element = (int *) malloc (sizeof (int) * MAXNUM);
        if (alist->element) {
            alist->n = 0;
            return alist;
        }
        else
            delete (alist);
    }
    return NULL;
}

ablist creatblist (void) {
    ablist blist = (ablist) malloc (sizeof (struct  Addlist));
    if (blist != NULL) {
        blist->element = (int *) malloc (sizeof (int) * MAXNUM);
        if (blist->element) {
            blist->n = 0;
            return blist;
        }
        else
            delete (blist);
    }
}

int main () {
    int i, j, k;
    int lena, lenb, len;
    int carry = 0;
    ablist alist = creatalist ();
    ablist blist = creatblist ();
    char achar [MAXNUM];
    cin >> achar;
    lena = strlen (achar);
    char bchar [MAXNUM];
    cin >> bchar;
    lenb = strlen (bchar);
    for (i = 0; i < lena; i++) {
        alist->element[i] = achar[lena - i - 1] - '0';
    }
    for (i = lena; i < MAXNUM; i++) {
        alist->element[i] = 0;
    }
    for (j = 0; j < lenb; j++) {
        blist->element[j] = bchar[lenb - j - 1] - '0';
    }
    for (j = lenb; j < MAXNUM; j++) {
        blist->element[j] = 0;
    }
    if (lena <= lenb)
        len = lenb;
    else
        len = lena;
    for (k = 0; k < len; k++) {
        alist->element[k] = alist->element[k] + blist->element[k] + carry;
        if (alist->element[k] >= 10) {
            alist->element[k] -= 10;
            carry = 1;
        }
        else
            carry = 0;
    }
    if (carry == 1) {
        alist->element[len] = 1;
        for (i = len; i >= 0; i--)
            cout << alist->element[i];
        return 0;
    }
    else {
        j = 0;
        for (i = len - 1; i >= 0; i--) {
            if (alist->element[i] == 0) {
                j++;
            }
            else
                break;
        }
        if (j != len)
            for (k = len - 1 - j; k >= 0; k--) {
                cout << alist->element[k];
            }
        else
            cout << "0" << endl;
        return 0;
    }
}

