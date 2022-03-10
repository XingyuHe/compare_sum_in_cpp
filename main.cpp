/*
1. write sum function
2. test sum with different containers
3. compare sum with accumuate with
  1. hand-coded sum of vector<int>
  2. accumulate
3. write sum function that constraints its arg types with concepts
 */

#include <bits/stdc++.h>
#include <concepts>
#include "sum.h"
#include "accumulator.h"

using namespace std;

// test(function<>(bind(summing_fn, test_case)))
template <invocable Fn>
void timeFn(Fn fn) {
  fn();
}

int handIntSum(vector<int> c, int acc) {
  for (const auto & element : c)
    acc = acc + element;
  return acc;
}

void compareIntSum() {
  // test1
  int init = 0;
  vector<int> values = {1,2,3,4};
  int res = sum(values, IntAdd(), init);
  cout << res << endl;
}


int main(int argc, char const *argv[])
{
  /* code */
  compareIntSum();
  return 0;
}
