#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

int main() {
	std::vector<int> moves;
	std::transform(std::istream_iterator<char>(std::cin), std::istream_iterator<char>(), std::back_inserter(moves),
			[](char c) -> int { return c == '(' ? 1 : -1; });

	std::vector<int> floors;
	std::partial_sum(moves.cbegin(), moves.cend(), std::back_inserter(floors));

	int basement = 1 + std::distance(
			floors.cbegin(),
			std::find_if(floors.cbegin(), floors.cend(), [](int a) { return a < 0; }));

	std::cout << floors.back() << ' ' << basement << '\n';
	return 0;
}
