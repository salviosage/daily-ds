use std::collections::HashMap;

#[cfg(test)]
mod tests {
    use super::first_uniq_char;
    let mut test_case = HashMap::new({
        "leetcode":      0,
        "loveleetcode": 2,
        "aabb":         -1
    });
    for (input, expected) in test_case {
        let result = first_uniq_char(input);
        #[test]
        assert_eq!(result, expected);
    }
    
}