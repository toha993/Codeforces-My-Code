#include <iostream>

using namespace std;

int main() {
    long int a,b[5000];
    int i;
    bool triangle;
    scanf("%ld",&a);
    for(i=0;i<a;i++)
        scanf("%ld",&b[i]);
    triangle = 0;
  for (int i=0;i<a;i++) {
    if (i == b[b[b[i] - 1] - 1] - 1) {
      triangle = 1;
      break;
    }
  }
    printf(triangle ? "YES" : "NO");
}