#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <algorithm>
#include <bitset>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <sstream>
#include <string>
#include <vector>

namespace ns_fast_io
{
  bool read(double& number)
  { return scanf("%lf", &number) == 1; }

  bool read(char* str)
  { return scanf("%s", str) == 1; }

  char ch;
  bool negative;

  template<class T> bool read(T& number)
  {
    #define readchar(ch) if ((ch = getchar()) == EOF) return false
    readchar(ch);
    negative = false;
    for (; !(ch >= '0' && ch <= '9' || ch == '-'); )
      readchar(ch);
    if (ch == '-') {
      negative = true;
      readchar(ch);
    }
    number = 0;
    for (; ch >= '0' && ch <= '9'; ) {
      number = number * 10 + ch - '0';
      readchar(ch);
    }
    if (negative)
      number = -number;
    return true;
    #undef readchar
  }

  template<class T> bool read(T& a, T& b)
  { return read(a) && read(b); }

  template<class T> bool read(T& a, T& b, T& c)
  { return read(a) && read(b) && read(c); }

  template<class T> bool read(T& a, T& b, T& c, T& d)
  { return read(a) && read(b) && read(c) && read(d); }

  int int_tmp;
  long long llong_tmp;
  double double_tmp;

  int next_int()
  { read(int_tmp); return int_tmp; }

  long long next_llong()
  { read(llong_tmp); return llong_tmp; }

  double next_double()
  { scanf("%lf", &double_tmp); return double_tmp; }
}
// end: ns_fast_io

namespace ns_type_defs
{
  typedef long long llong;
  typedef std::pair<int, int> pii;
}
// end: ns_type_defs

namespace ns_defines
{
  #define gcd __gcd

  #define ALL(v) (v).begin(), (v).end()
  #define REP(i, l, r) for (int i = l, i##r = r; i < i##r; i++)
  // #define CLEAR(a) memset(a, 0, sizeof(a))
  template<class T>void CLEAR(T* l, T* r)
  { memset(l, 0, sizeof(l) * (r - l)); }
  template<class T>void CLEAR(T* a, int cnt)
  { memset(a, 0, sizeof(T) * cnt); }
  #define EACH(it, v) for (auto it = (v).begin(); it != (v).end(); it++)
}
// end: ns_defines

namespace ns_using
{
  using ns_fast_io::next_llong;
  using ns_fast_io::next_double;
  using ns_fast_io::next_int;
  using ns_fast_io::read;
  using namespace ns_type_defs;
  using namespace ns_defines;

  using std::bitset;
  using std::cin;
  using std::cout;
  using std::deque;
  using std::fill;
  using std::greater;
  using std::iostream;
  using std::ios_base;
  using std::less;
  using std::list;
  using std::lower_bound;
  using std::map;
  using std::max;
  using std::max_element;
  using std::min;
  using std::min_element;
  using std::multimap;
  using std::multiset;
  using std::next_permutation;
  using std::nth_element;
  using std::ofstream;
  using std::pair;
  using std::queue;
  using std::set;
  using std::sort;
  using std::stack;
  using std::string;
  using std::stringstream;
  using std::swap;
  using std::unique;
  using std::upper_bound;
  using std::vector;

  using std::make_pair;
}
// end: ns_using

using namespace ns_using;