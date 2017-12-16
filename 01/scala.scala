object scala extends App {
  val iter = Iterator.continually(Console.in.read).takeWhile(_ != -1)
    .filter(x => x == '(' || x == ')')
    .map(x => (x - '(') * -2 + 1)
    .scanLeft(0)(_ + _)
  val basement = iter.takeWhile(_ >= 0).length
  println(s"${iter.toIterable.last} ${basement}")
}
