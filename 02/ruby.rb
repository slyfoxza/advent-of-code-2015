#!/usr/bin/env ruby
puts(
  $stdin.each_line
    .map { |x| x.split('x').map &:to_i }
    .reduce([0, 0]) do |z, x|
      pairs = x.combination(2)
      areas = pairs.map { |x| x[0] * x[1] }
      [
        z[0] + areas.sum * 2 + areas.min,
        z[1] + x.reduce(:*) + pairs.map { |x| 2 * (x[0] + x[1]) }.min
      ]
    end
    .join ' '
)
