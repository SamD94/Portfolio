use std::io;

fn main() {
    println!("Hello World");
    println!("What's your name?");
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("I'm sorry, I couldn't understand you.");
    println!("Hello, {}", input);
}