#include <set>
#include <bitset>
#include <queue>
#include <deque>
#include <set>
#include <bitset>
#include <queue>
#include <deque>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>

#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cstring>
#include <string>
#include <cassert>

#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>

using namespace std;

typedef vector <int> vi;
typedef vector <vi> vvi;
typedef pair <int, int> ii;
typedef vector <string> vs;
typedef long long int64; //NOTES:int64
typedef unsigned long long uint64; //NOTES:uint64
const double pi = acos(-1.0); //NOTES:pi
const double eps = 1e-11; //NOTES:eps
const int MAXI = 2 << 29;
const int dx[9] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
const int dy[9] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};

#define FORN(i,a,b)     for (int i=(a),_b=(b); i<_b; i++)
#define RFORN(i,b,a)    for (int i=(b)-1,_a=(a); i>=_a; i--)
#define RESET(a,b)      memset((a),(b),sizeof(a))

#define SC(x)           scanf("%d",&x)
#define SC2(x,y)        scanf("%d %d",&x,&y)
#define PR(x)           printf("%d ",x)
#define PR2(x,y)        printf("%d %d ",x,y)
#define PRS(x)          printf("%s",x)
#define END             printf("\n")
#define EXIT(x)         {PRS(x);return 0;}
#define DBG(x)          {cerr << "--> " << #x << " = " << x << endl;}

#define fi              first
#define se              second
#define PB              push_back
#define ALL(x)          (x).begin(),(x).end()
#define MP(X,Y)         make_pair(X,Y)//NOTES:MP(
#define foreach(i, c)   for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c, x)   ((c).find(x) != (c).end())

void startDBG(){
    PRS("------------------- Start Debug -------------------\n\n");
}

void endDBG(){
    PRS("\n\n------------------- End Debug -------------------\n");
}

template<class T> inline void DebM(T A[], T ii, T jj){//Debug sequence
    END;PRS("----------------DEBUG----------------");END;
    FORN (i,ii,jj) cout<<A[i]<<" ";
    END;PRS("-------------------------------------");END;
}

int MUOI(int x){
    int re = 1;
    FORN (i, 0, x) re *= 10;
    return re + x;
}

//Template code by ACRush
template<class T> inline bool isPrimeNumber(T n)//NOTES:isPrimeNumber(
{
    if (n <= 1)return false;
    for (T i = 2; i * i <= n; i++) if (n % i == 0) return false;
    return true;
}

template<class T> inline void checkmin(T &a, T b) {
    if (b < a) a = b;
}//NOTES:checkmin(

template<class T> inline void checkmax(T &a, T b) {
    if (b > a) a = b;
}//NOTES:checkmax(

template<class T> inline T sqr(T x) {
    return x*x;
}//NOTES:sqr

template<class T> inline T lowbit(T n) {
    return (n^(n - 1))&n;
}//NOTES:lowbit(

template<class T> inline int countbit(T n) {
    return (n == 0) ? 0 : (1 + countbit(n & (n - 1)));
}//NOTES:countbit(
//Numberic Functions

int64 C(int64 m, int64 n){
    int64 tot = 1;
    int64 i = m;
    while (i > m - n)
        tot *= i--;
    i = n;
    while (i > 1) tot /= i--;
    return tot;
}

template<class T> inline T gcd(T a, T b)//NOTES:gcd(
{
    if (a < 0)return gcd(-a, b);
    if (b < 0)return gcd(a, -b);
    return (b == 0) ? a : gcd(b, a % b);
}

template<class T> inline T lcm(T a, T b)//NOTES:lcm(
{
    if (a < 0)return lcm(-a, b);
    if (b < 0)return lcm(a, -b);
    return a * (b / gcd(a, b));
}

template<class T> inline T euclide(T a, T b, T &x, T &y)//NOTES:euclide(
{
    if (a < 0) {
        T d = euclide(-a, b, x, y);
        x = -x;
        return d;
    }
    if (b < 0) {
        T d = euclide(a, -b, x, y);
        y = -y;
        return d;
    }
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    } else {
        T d = euclide(b, a % b, x, y);
        T t = x;
        x = y;
        y = t - (a / b) * y;
        return d;
    }
}

template<class T> inline vector<pair<T, int> > factorize(T n)//NOTES:factorize(
{
    vector<pair<T, int> > R;
    for (T i = 2; n > 1;) {
        if (n % i == 0) {
            int C = 0;
            for (; n % i == 0; C++, n /= i);
            R.push_back(make_pair(i, C));
        }
        i++;
        if (i > n / i) i = n;
    }
    if (n > 1) R.push_back(make_pair(n, 1));
    return R;
}


template<class T> inline T checkMod(T n, T m) {
    return (n % m + m) % m;
}//NOTES:checkMod(

template<class T> inline T powerMod(T p, int e, T m)//NOTES:powerMod(
{
    if (e == 0)return 1 % m;
    else if (e % 2 == 0) {
        T t = powerMod(p, e / 2, m);
        return multiplyMod(t, t, m);
    } else return multiplyMod(powerMod(p, e - 1, m), p, m);
}
//Point&Line

double dist(double x1, double y1, double x2, double y2) {
    return sqrt(sqr(x1 - x2) + sqr(y1 - y2));
}//NOTES:dist(


bool isMiddle(double s, double m, double t) {
    return fabs(s - m) <= eps | fabs(t - m) <= eps | (s < m) != (t < m);
}//NOTES:isMiddle(
//Translator

bool isUpperCase(char c) {
    return c >= 'A' && c <= 'Z';
}//NOTES:isUpperCase(

bool isLowerCase(char c) {
    return c >= 'a' && c <= 'z';
}//NOTES:isLowerCase(

bool isLetter(char c) {
    return c >= 'A' && c <= 'Z' | c >= 'a' && c <= 'z';
}//NOTES:isLetter(

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}//NOTES:isDigit(

char toLowerCase(char c) {
    return (isUpperCase(c)) ? (c + 32) : c;
}//NOTES:toLowerCase(

char toUpperCase(char c) {
    return (isLowerCase(c)) ? (c - 32) : c;
}//NOTES:toUpperCase(

template<class T> string toString(T n) {
    ostringstream ost;
    ost << n;
    ost.flush();
    return ost.str();
}//NOTES:toString(

int toInt(string s) {
    int r = 0;
    istringstream sin(s);
    sin >> r;
    return r;
}//NOTES:toInt(

int64 toInt64(string s) {
    int64 r = 0;
    istringstream sin(s);
    sin >> r;
    return r;
}//NOTES:toInt64(

double toDouble(string s) {
    double r = 0;
    istringstream sin(s);
    sin >> r;
    return r;
}//NOTES:toDouble(

template<class T> void stoa(string s, int &n, T A[]) {
    n = 0;
    istringstream sin(s);
    for (T v; sin >> v; A[n++] = v);
}//NOTES:stoa(

template<class T> void atos(int n, T A[], string &s) {
    ostringstream sout;
    for (int i = 0; i < n; i++) {
        if (i > 0)sout << ' ';
        sout << A[i];
    }
    s = sout.str();
}//NOTES:atos(

template<class T> void atov(int n, T A[], vector<T> &vi) {
    vi.clear();
    for (int i = 0; i < n; i++) vi.push_back(A[i]);
}//NOTES:atov(

template<class T> void vtoa(vector<T> vi, int &n, T A[]) {
    n = vi.size();
    for (int i = 0; i < n; i++)A[i] = vi[i];
}//NOTES:vtoa(

template<class T> void stov(string s, vector<T> &vi) {
    vi.clear();
    istringstream sin(s);
    for (T v; sin >> v; vi.push_back(v));
}//NOTES:stov(

template<class T> void vtos(vector<T> vi, string &s) {
    ostringstream sout;
    for (int i = 0; i < vi.size(); i++) {
        if (i > 0)sout << ' ';
        sout << vi[i];
    }
    s = sout.str();
}//NOTES:vtos(
int main(){
    int fives=0,zeros=0;
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        if(x==5)
            fives++;
        if(x==0)
            zeros++;
    }
    if(fives/9>0 && zeros>0)
    {
        fives/=9;
        for(int i=0;i<(fives*9);i++)
        {
            cout<<'5';
        }
        for(int i=0;i<zeros;i++)
            cout<<'0';
    }
    else if(zeros>0)
    {
        cout<<'0'<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
}
