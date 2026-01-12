#include<bits/stdc++.h>
using namespace std;

void pattern1(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n) {
    for(int i = n; i > 0; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n) {
    for(int i = n; i > 0; i--) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n) {
    int spaces = n - 1;
    for(int row = 1; row <= n; row++) {
        //spaces
        for(int i = 1; i <= spaces; i++) {
            cout << " ";
        }
        //stars
        for(int stars = 1; stars <= 2 * row - 1; stars++) {
            cout << "*";
        }
        //spaces
        for(int j = 1; j<=spaces; j++) {
            cout << " ";
        }
        cout << endl;
        spaces--;
    }
}

//This one and the one before this was hard
void pattern8(int n) {
    int condition = 2 * n;
    for(int row = 1; row <=n; row++) {
        if(row == 1) {
            condition -= row;
        }
        else {
            condition -= 2;
        }
        for(int spaces = 1; spaces < row; spaces++) {
            cout << " ";
        }
        for(int stars = 1; stars <= condition; stars++) {
            cout << "*";
        }
        for(int spaces = 1; spaces < row; spaces++) {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern10(int n) {
    int row = 2 * n - 1;
    int count = 0;
    int logic = 0;
    for(int i = 1; i <= row; i++) {
        if(i <= n) {
            for(int j = 1; j <= i; j++) {
                cout << "* ";
            }
        }
        else if(count == n) {
            count--;
            logic = !logic;
        }
        if(logic == 1) {
            for(int j = 1; j <= count; j++) {
            cout << "* ";
            }
        }
        cout << endl;
        if(i <= n) {
            count++;
        }
        else {
            count--;
        }
    }
}

void pattern11(int n) {
    int printValue = 1;
    for(int i = 1; i <= n; i++) {
        printValue = i % 2 == 0 ? 0 : 1;
        for(int j = 1; j <= i; j++) {
            cout << printValue << " ";
            printValue = !printValue;
        }
        cout << endl;
    }
}

void pattern12(int n) {
    int spaces = n * 2 - 2;
    for(int row = 1; row <= n; row++) {
        int count = 0;
        for(int col = 1; col <= row; col++) {
            cout << col;
            count++;
        }
        for(int space = 1; space <= spaces; space++) {
            cout << " ";
        }
        for(int col = 1; col <= row; col++) {
            cout << count;
            count--;
        }
        spaces -= 2;
        cout << endl;
    }
}

void pattern13(int n) {
    int printValue = 1;
    for(int row = 1; row <= n; row++) {
        for(int col = 1; col <= row; col++) {
            cout << printValue << " ";
            printValue++;
        }
        cout << endl;
    }
}

void pattern14(int n) {
    for(int row = 1; row <= n; row++) {
        char c = 'A';
        for(int col = 1; col <= row; col++) {
            cout << c++;
        }
        cout << endl;
    }
}

void pattern15(int n) {
    for(int row = 1; row <= n; row++) {
        char c = 'A';
        for(int col = 1; col <= n - (row - 1); col++) {
            cout << c++;
        }
        cout << endl;
    }
}

void pattern16(int n) {
    char printValue = 'A';
    for(int row = 1; row <= n ; row++) {
        for(int col = 1; col <= row; col++) {
            cout << printValue;
        }
        printValue++;
        cout << endl;
    }
}

void pattern17(int n) {
    char m = 'A';
    for(int row = 1; row <= n; row++) {
        char lp = 'A';
        char rp = m;

        for(int spaces = 1; spaces <= n - row; spaces++) {
            cout << " ";
        }
        for(int col = 1; col <= 2 * row - 1; col++) {
            if(col < row) {
                cout << lp++;
            }
            else if(col == row) {
                cout << m++;
            }
            else {
                cout << --rp;
            }
        }
        for(int spaces = 1; spaces <= n - row; spaces++) {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18(int n) {
    char c = 64 + n;
    for(int row = 1; row <= n; row++) {
        char copy = c;
        for(int col = 1; col <= row; col++) {
            cout << copy++;
        }
        cout << endl;
        c--;
    }
}

void pattern19(int n) {
    int spaces = 0;
    int printValue = n;

    for(int row = 1; row <= 2 * n; row++) {
        for(int col = 1; col <= printValue; col++) {
            cout << "*";
        }
        for(int space = 1; space <= spaces; space++) {
            cout << " ";
        }
        for(int col = 1; col <= printValue; col++) {
            cout << "*";
        }
        cout << endl;

    if(row < n) {
        printValue--;
        spaces += 2;
    }
    else if(row > n) {
        printValue++;
        spaces -= 2;
        }
    }
}

void pattern20(int n) {
    int spaces = 2 * n - 2;
    for(int row = 1; row <= 2 * n - 1; row++){
        int rowChange = row > n ? 2 * n - row : row;
        for(int stars = 1; stars <= rowChange; stars++) {
            cout << "*";
        }
        for(int space = 1; space <= spaces; space++) {
            cout << " ";
        }
        for(int stars = 1; stars <= rowChange; stars++) {
            cout << "*";
        }
        cout << endl;
        if(row >= n) {
            spaces += 2;
        }
        else {
            spaces -= 2;
        }
    }
}

void pattern21(int n) {
    for(int row = 1; row <= n; row++) {
        for(int col = 1; col <= n; col++) {
            if(row == 1 || row == n || col == 1 || col == n)  {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern22(int n) {
    for(int row = 1; row <= 2 * n - 1; row++) {
        for(int col = 1; col <= 2 * n - 1; col++) {
            int minDist = min(min(row, col), min(2 * n - row, 2 * n - col));
            cout << n - minDist + 1 << " ";
        }
        cout << "\n";
    }
}

int main(void) {
    int t;
    cin >> t;
    for(int i = 1; i <= t ; i++) {
        int n;
        cin >> n;
        pattern1(n);
        cout << endl;
        pattern2(n);
        cout << endl;
        pattern3(n);
        cout << endl;
        pattern4(n);
        cout << endl;
        pattern5(n);
        cout << endl;
        pattern6(n);
        cout << endl;
        pattern7(n);
        pattern8(n); 
        cout << endl;
        pattern10(n);
        cout << endl;
        pattern11(n);
        cout << endl;
        pattern12(n);
        cout << endl;
        pattern13(n);
        cout << endl;
        pattern14(n);
        cout << endl;
        pattern15(n);
        cout << endl;
        pattern16(n);
        cout << endl;
        pattern17(n);
        cout << endl;
        pattern18(n);
        cout << endl;
        pattern19(n);
        cout << endl;
        pattern20(n);
        cout << endl;
        pattern21(n);
        cout << endl;
        pattern22(n);
    }
}
