#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int root, count = 0;
    bool a[999984];

    for (int i = 2; i < 999984; i++){
        a[i] = true;
    }

    root = sqrt(999984);

    for (int i = 2; i <= root; i++){
        if (a[i] == true){
            for (int j = 2; i * j <= 999984; j++){
                a[i * j] = false;
            }
        }
    }

    for (int i = 2; i < 999984; i++){
        if (a[i] == true)
            count++;
    }

    int prime[count];

    for (int i = 2, j = 0; i < 999984; i++){
        if (a[i] == true){
            prime[j] = i;
            j++;
        }
    }

    int k, n;
    long long int sum = 0;

    scanf("%d", &k);
    for (int i = 0; i < k; i++){
        scanf("%d", &n);

        int j = 0;
        while (prime[j] <= n){
            sum += (long long int)prime[j];
            j++;

            //cout << endl << sum << ' ' << prime[j] << endl;
        }

        printf("%lld\n", sum);
        sum = 0;
    }

    return 0;
}
