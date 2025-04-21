
package main

import "testing"

func TestCircularQueue(t *testing.T) {
	q := Constructor(3)
	if !q.EnQueue(1) || !q.EnQueue(2) || !q.EnQueue(3) || q.EnQueue(4) {
		t.Fail()
	}
	if q.Rear() != 3 {
		t.Fail()
	}
	if !q.IsFull() || !q.DeQueue() || !q.EnQueue(4) || q.Rear() != 4 {
		t.Fail()
	}
}
