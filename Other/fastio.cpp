// benchmark mowi ze szybsze od cin i cout
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

/* only for positive integers
template <class T> inline T rd() {
    T r=0; int c = getchar();
    while(c < '0' || c > '9')   c = getchar();
    for(; '0' <= c && c <= '9'; c = getchar())
        r = (r << 3) + (r << 1) + c - 48;
    return r;
}*/

template <class T> inline T rd() {
    T r=0; int c = getchar(), s=1;   
    while(!('0' <= c && c <= '9') && c != '-')  c = getchar();
    if(c == '-')    s = -s, c = getchar();
    for(; '0' <= c && c <= '9'; c = getchar())
        r = (r << 3) + (r << 1) + c - 48;
    return r * s;
}

struct FastIO{
  FastIO& operator << (int x){
    if(x == 0){
      putchar('0');
      return *this;
	  }else if(x < 0)	putchar('-'), x = -x;
	  int tab[10], p = 0;
	  while(x)		tab[p++] = int(x%10)+48, x /= 10;
	  while(p--)	putchar(tab[p]);
    return *this;
  }
  FastIO& operator << (long long x){
    if(x == 0){
      putchar('0');
      return *this;
    }else if(x < 0)	putchar('-'), x = -x;
    int tab[19], p = 0;
    while(x)		tab[p++] = int(x%10)+48, x /= 10;
    while(p--)	putchar(tab[p]);
    return *this;
  }
  FastIO& operator << (char x){
    putchar(x);
    return *this;
  }
  FastIO& operator << (string x){
    for(char& ch : x) putchar(ch);
    return *this;
  }
  FastIO& operator >> (int &x){
    register int c=0,s=1;
    while(c<33)c=getchar();
    if(c==45)s=-1,c=getchar();
    for(x=0;c>32;c=getchar())x=x*10+c-48;
    x*=s;
    return *this;
  }
  FastIO& operator >> (long long &x){
    register int c=0,s=1;
    while(c<33)c=getchar();
    if(c==45)s=-1,c=getchar();
    for(x=0;c>32;c=getchar())x=x*10+c-48;
    x*=s;
    return *this;
  }
  FastIO& operator >> (char &x){
    x = getchar();
    return *this;
  }
  FastIO& operator >> (string &x){
    register int c = 0;
	  while(c < 33)	c = getchar();
	  while(c > 32)	x.push_back(char(c)), c = getchar();
    return *this;
  }
}io;

int main() {

}
