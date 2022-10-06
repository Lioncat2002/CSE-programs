fn is_palindrome(mut s:String)->bool{

    s=s.to_lowercase();
    let t=s.replace(|c:char | !c.is_alphanumeric(), "");
    t==t.chars().rev().collect::<String>()

}


fn main() {
    let x=is_palindrome("race a car".to_string());
    println!("{}",x);
}
