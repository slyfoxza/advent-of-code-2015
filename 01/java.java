import java.io.IOException;

class java {
	public static void main(final String[] arguments) throws IOException {
		int basement = -1;
		int i = 0;
		int floor = 0;

		int c;
		while((c = System.in.read()) != -1) {
			floor += (c - '(') * -2 + 1;
			if(basement < 0) {
				++i;
				if(floor < 0) basement = i;
			}
		}

		System.out.print(floor);
		System.out.print(' ');
		System.out.println(basement);
	}
}
