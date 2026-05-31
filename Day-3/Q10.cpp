#include<bits/stdc++.h>
using namespace std;

int main() {
    int i,j,start, end,check;
    cout << "Enter range: ";
    cin >> start >> end;

    for (i = start; i <= end; i++) {
        if (i <= 1) continue;

         check = 0; 

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                check = 1;
                break;
            }
        }

        if (check == 0) {
            cout << i << " "<< endl;
        }
    }

    return 0;
}

/* Output : 
Enter range: 1
17
2 
3 
5 
7 
11 
13 
17 */