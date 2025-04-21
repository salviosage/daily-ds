pub struct MyCircularQueue {
    data: Vec<i32>,
    front: usize,
    rear: usize,
    size: usize,
    capacity: usize,
}

impl MyCircularQueue {
    pub fn new(k: i32) -> Self {
        MyCircularQueue {
            data: vec![0; k as usize],
            front: 0,
            rear: 0,
            size: 0,
            capacity: k as usize,
        }
    }

    pub fn en_queue(&mut self, value: i32) -> bool {
        if self.is_full() {
            return false;
        }
        self.data[self.rear] = value;
        self.rear = (self.rear + 1) % self.capacity;
        self.size += 1;
        true
    }

    pub fn de_queue(&mut self) -> bool {
        if self.is_empty() {
            return false;
        }
        self.front = (self.front + 1) % self.capacity;
        self.size -= 1;
        true
    }

    pub fn front(&self) -> i32 {
        if self.is_empty() {
            return -1;
        }
        self.data[self.front]
    }

    pub fn rear(&self) -> i32 {
        if self.is_empty() {
            return -1;
        }
        self.data[(self.rear + self.capacity - 1) % self.capacity]
    }

    pub fn is_empty(&self) -> bool {
        self.size == 0
    }

    pub fn is_full(&self) -> bool {
        self.size == self.capacity
    }
}
