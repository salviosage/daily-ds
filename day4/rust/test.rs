
#[cfg(test)]
mod tests {
    use super::MyCircularQueue;

    #[test]
    fn test_queue() {
        let mut cq = MyCircularQueue::new(3);
        assert!(cq.en_queue(1));
        assert!(cq.en_queue(2));
        assert!(cq.en_queue(3));
        assert!(!cq.en_queue(4));
        assert_eq!(cq.rear(), 3);
        assert!(cq.is_full());
        assert!(cq.de_queue());
        assert!(cq.en_queue(4));
        assert_eq!(cq.rear(), 4);
    }
}
