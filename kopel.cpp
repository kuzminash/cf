#define _CRT_SECURE_NO_WARNINGS
#include <vector>
#include <iostream>
#include <fstream>
#include <iostream>
#include <utility>
#include <unordered_map>
#include <stack>
#include <string>
#include <map>
#include <cstring>
#include <algorithm>
#include <set>
#include <numeric>
#include <cmath>
#include <ctime>
#include <set>
#include <queue>
#include <chrono>
#include <sstream>

using namespace std;

typedef long long LL;
#define INF 999999999

#include <cstdio>

#define VERSION "0.1.5"

#include <cassert>
#include <cstdio>
#include <algorithm>

/** Fast allocation */
const int MAX_MEM = 1e8;
int mpos = 0;
char mem[MAX_MEM];
inline void * operator new (size_t n) {
    assert((mpos += n) <= MAX_MEM);
    return (void *)(mem + mpos - n);
}
inline void operator delete (void *) noexcept { } // must have!

/** Interface */
inline int readChar();
template <class T = int> inline T readInt();
template <class T> inline void writeInt(T x, char end = 0);
inline void writeChar(int x);
inline void writeWord(const char *s);

/** Read */

static const int buf_size = 4096;

inline int getChar() {
    static char buf[buf_size];
    static int len = 0, pos = 0;
    if (pos == len)
        pos = 0, len = fread(buf, 1, buf_size, stdin);
    if (pos == len)
        return -1;
    return buf[pos++];
}

inline int readChar() {
    int c = getChar();
    while (c <= 32)
        c = getChar();
    return c;
}

template <class T>
inline T readInt() {
    int s = 1, c = readChar();
    T x = 0;
    if (c == '-')
        s = -1, c = getChar();
    while ('0' <= c && c <= '9')
        x = x * 10 + c - '0', c = getChar();
    return s == 1 ? x : -x;
}

/** Write */

static int write_pos = 0;
static char write_buf[buf_size];

inline void writeChar(int x) {
    if (write_pos == buf_size)
        fwrite(write_buf, 1, buf_size, stdout), write_pos = 0;
    write_buf[write_pos++] = x;
}

template <class T>
inline void writeInt(T x, char end) {
    if (x < 0)
        writeChar('-'), x = -x;

    char s[24];
    int n = 0;
    while (x || !n)
        s[n++] = '0' + x % 10, x /= 10;
    while (n--)
        writeChar(s[n]);
    if (end)
        writeChar(end);
}

inline void writeWord(const char *s) {
    while (*s)
        writeChar(*s++);
}

struct Flusher {
    ~Flusher() {
        if (write_pos)
            fwrite(write_buf, 1, write_pos, stdout), write_pos = 0;
    }
} flusher;

typedef unsigned long long ULL;
int cnt = 0;


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


}
