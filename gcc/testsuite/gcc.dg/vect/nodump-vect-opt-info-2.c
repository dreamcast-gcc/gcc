/* { dg-do compile { target vect_int } } */
/* { dg-additional-options "-fopt-info-vec-all -O3" } */

extern void accumulate (int x, int *a);

int test_missing_function_defn (int *arr, int n) /* { dg-message "vectorized 0 loops in function" } */
{
  int sum = 0;
  for (int i = 0; i < n; ++i) /* { dg-missed "3: couldn't vectorize loop" } */
    accumulate (arr[i], &sum); /* { dg-missed "5: statement clobbers memory: accumulate \\(.*\\);" } */
  return sum;
}
