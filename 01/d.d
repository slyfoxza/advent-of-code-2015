import std.algorithm;
import std.range;
import std.stdio;

void main() {
	auto range = stdin.byChunk(4096)
		.joiner
		.filter!(a => a == '(' || a == ')')
		.map!(a => a == '(' ? 1 : -1)
		.cumulativeFold!((a, b) => a + b);
	auto basement = range.countUntil!"a < 0" + 1;
	int floor;
	foreach(int a; range) floor = a;
	writefln("%d %d", floor, basement);
}
