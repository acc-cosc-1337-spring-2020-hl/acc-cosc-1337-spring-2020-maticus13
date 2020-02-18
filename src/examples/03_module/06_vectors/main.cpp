#include "vec.h"
using std::vector;

int main() 
{
	vector<int> nums{ 9, 10, 99, 5, 67};

	loop_vector_w_index(nums);
	loop_vector_w_index_ref(nums);

	return 0;
}