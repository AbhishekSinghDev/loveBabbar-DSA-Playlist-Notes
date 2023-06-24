#include<bits/stdc++.h>
using namespace std;

// Calculate factorial of 212 and mod it by m, where m = 10^9+7
const int M = 1e9+7;

long factorial(int x) {
    long fact = 1;
    for(int i=1; i<=x; i++) {
        fact = (1LL * (fact * i)) % M;
    }

    return fact;
}

int main() {

    int n;
    cout<<"Enter the value: ";
    cin>>n;

    cout<<"Factorial: "<<factorial(n);    

    return 0;
}

/*
212! = 
473370218291
232597119815
728277345852
897211166567
164458306316
265484056721
629932620033
359797463202
079534469404
414116228857
474186033070
787165399180
237241342095
489201957284
646808940490
975585219250
809744672464
782676857787
898721396069
180473088222
331544630965
059820275670
431301074231
557813134507
836470975852
979565544658
175847773060
016982414325
665641106977
587200000000
000000000000
000000000000
000000000000
0000000.

% 1000000007

*/