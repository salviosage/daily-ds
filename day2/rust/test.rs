
#[cfg(test)]
mod tests {
    use super::top_k_frequent;

    #[test]
    fn test_case_1() {
        let result = top_k_frequent(vec![1,1,1,2,2,3], 2);
        assert!(result.contains(&1) && result.contains(&2));
    }

    #[test]
    fn test_case_2() {
        let result = top_k_frequent(vec![1], 1);
        assert_eq!(result, vec![1]);
    }
}
