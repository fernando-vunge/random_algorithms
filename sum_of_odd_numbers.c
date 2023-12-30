#include <inttypes.h>
#include <stdio.h>
uint64_t rowSumOddNumbers(uint32_t n)
{
	uint64_t row_sum;
	uint64_t num_counter = 1;

	int row_counter = 1;
	int columm_counter = 1;
	
	int row_qtd = (int)n;
	int columm_qtd = 1;

	while (row_counter <= row_qtd){
		row_sum = 0;
		while (columm_counter <= columm_qtd)
		{
			row_sum += num_counter;
			num_counter += 2;
			columm_counter++;
		}
		columm_qtd++;
		row_counter++;
		columm_counter = 1;
	}
		return (row_sum);
}

int main(int argc, char const *argv[])
{
	printf("%"PRIu64"\n", rowSumOddNumbers(3));
	return 0;
}
