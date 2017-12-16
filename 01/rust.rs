use std::io::{self, Read};

fn main() {
    let mut iter = io::stdin().bytes()
        .map(|x| x.unwrap())
        .filter(|&x| x == b'(' || x == b')')
        .map(|x| ((x - b'(') as i16) * -2 + 1)
        .scan(0, |state, x| {
            *state += x;
            Some(*state)
        });
    let basement = iter.by_ref().take_while(|&x| x >= 0).count() + 1;
    println!("{} {}", iter.last().unwrap(), basement);
}
