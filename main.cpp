#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol104;

/*
    3
   / \
  9  20
    /  \
   15   7

return its depth = 3.
*/

tuple<Node *, int>
testFixture1()
{
  auto root = new Node(3);
  root->left = new Node(9);

  root->right = new Node(20);
  root->right->left = new Node(15);
  root->right->right = new Node(7);

  return make_tuple(root, 3);
}

void test1()
{
  auto f = testFixture1();
  Solution sol;
  auto path = sol.maxDepth(get<0>(f));
  cout << "Expect to see :" << get<1>(f) << endl;
  cout << path << endl;
}

main()
{
  test1();
  return 0;
}