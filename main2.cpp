 #include <iostream>
 #include <cmath>
 
 using namespace std;
 
 int main()
 {
    int n;
    cin >> n;
    int arr[n];
    long long x = 0;
    int tmp;
    int base;
    int exp;
 
     while(n--){
        cin >> tmp;
         base = tmp / 10;
         exp = tmp % 10;
         x += pow(base,exp);
     }
    cout << x;
    return 0;
 }