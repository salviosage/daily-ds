use std::collections::HashMap;

fn first_uniq_char(s: &str) -> i32 {
    let mut char_count = HashMap::new();


    for c in s.chars() {
        *char_count.entry(c).or_insert(0) += 1;
    }

    // Find the index of the first unique character
    for (i, c) in s.chars().enumerate() {
        if let Some(&count) = char_count.get(&c) {
            if count == 1 {
                return i as i32;
            }
        }
    }

    -1 
}

fn main() {
    println!("{}", first_uniq_char("leetcode"));      // Output: 0
    println!("{}", first_uniq_char("loveleetcode")); // Output: 2
    println!("{}", first_uniq_char("aabb"));         // Output: -1
}