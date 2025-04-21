package main

type MyCircularQueue struct {
	data     []int
	front    int
	rear     int
	size     int
	capacity int
}

func Constructor(k int) MyCircularQueue {
	return MyCircularQueue{
		data:     make([]int, k),
		capacity: k,
	}
}

func (q *MyCircularQueue) EnQueue(value int) bool {
	if q.IsFull() {
		return false
	}
	q.data[q.rear] = value
	q.rear = (q.rear + 1) % q.capacity
	q.size++
	return true
}

func (q *MyCircularQueue) DeQueue() bool {
	if q.IsEmpty() {
		return false
	}
	q.front = (q.front + 1) % q.capacity
	q.size--
	return true
}

func (q *MyCircularQueue) Front() int {
	if q.IsEmpty() {
		return -1
	}
	return q.data[q.front]
}

func (q *MyCircularQueue) Rear() int {
	if q.IsEmpty() {
		return -1
	}
	return q.data[(q.rear+q.capacity-1)%q.capacity]
}

func (q *MyCircularQueue) IsEmpty() bool {
	return q.size == 0
}

func (q *MyCircularQueue) IsFull() bool {
	return q.size == q.capacity
}
