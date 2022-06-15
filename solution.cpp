#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
using namespace sol104;
using namespace std;

/*takeaways
  - use recursion
  - time complexity O(n)
*/
int Solution::maxDepth(Node *root)
{
  /* a leaf node */
  if (root == nullptr)
    return 0;

  return 1 + max(maxDepth(root->left), maxDepth(root->right));
}