void algo_generate(int *begin, int *end);
void *algo_find(int *begin, int *end, int val);
void copy(int *src_begin, int *src_end, int *dest_begin);
void shuffle(int *begin, int *end);
void shuffle1(int *begin, int *end);
bool all_of(int *begin, int *end, bool (*foo)(int));
bool any_of(int *begin, int *end, bool (*foo)(int));
bool isNegative(int val);
void transform(int *begin, int *end, int *dest, int (*func)(int));
int Power(int val);
void copy_if(int *begin, int *end, int *dest, bool (*func)(int));
void sort_arr(int *begin, int *end);
void sort_arr1(int *begin, int *end);
void marger(int *begin, int *end, int *begin_second, int *end_second,
            int *dest);
void merget_sort(int *begin_first_array, int *end_first_array,
                 int *begin_second_array, int *end_second_array,
                 int *begin_dest);
bool equal(int *begin_first_array, int *end_first_array,
           int *begin_second_array, int *end_second_array);
int acumulate(int *begin, int *end, int init, int (*sum_func)(int, int));
int mult(int elem_1, int elem_2);
