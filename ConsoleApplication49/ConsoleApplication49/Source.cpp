#include <iostream>
#include <vector>

int main()
{
	std::cout << "What row of Pascal's triangle do you want to go up to?"
		<< std::endl;

	unsigned int n_num;
	std::cin >> n_num;
	if (!std::cin) {
		std::cerr << "Not a valid number!" << std::endl;
		return 1;
	}
	std::cout << '\n';

	std::vector<unsigned int> curr_row;
	std::vector<unsigned int> prev_row;
	prev_row.reserve(n_num);
	curr_row.reserve(n_num);

	while (curr_row.size() < n_num) {
		std::swap(prev_row, curr_row);
		curr_row.resize(prev_row.size() + 1);
		// generate the new values
		curr_row[0] = 1;
		for (std::size_t i = 0; i + 1 < prev_row.size(); ++i) {
			curr_row[i + 1] = prev_row[i] + prev_row[i + 1];
		}
		curr_row[prev_row.size()] = 1;
		// print the row
		for (auto k : curr_row) {
			std::cout << k << ' ';
		}
		std::cout << '\n';
	}
}