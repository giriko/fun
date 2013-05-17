// use std;

fn fibo(n: int) -> int {
    if n == 0 {
        return 0;
    }
    else if n == 1 {
        return 1
    }
    else  {
        return fibo(n-1) + fibo(n-2);
    }
}
fn isOdd(num: int) {
    if num % 2 == 0 {
        io::println(num.to_str());
    }
    else {
        io::println("NOPE!");
    }
}
fn main() {
    let mut n = 0;
    while n < 39 {
        isOdd(fibo(n));
        n = n + 1
    }
}

