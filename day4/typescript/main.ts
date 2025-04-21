export class MyCircularQueue {
    private data: number[];
    private front: number;
    private rear: number;
    private size: number;
    private capacity: number;

    constructor(k: number) {
        this.data = new Array(k);
        this.front = 0;
        this.rear = 0;
        this.size = 0;
        this.capacity = k;
    }

    enQueue(value: number): boolean {
        if (this.isFull()) return false;
        this.data[this.rear] = value;
        this.rear = (this.rear + 1) % this.capacity;
        this.size++;
        return true;
    }

    deQueue(): boolean {
        if (this.isEmpty()) return false;
        this.front = (this.front + 1) % this.capacity;
        this.size--;
        return true;
    }

    Front(): number {
        return this.isEmpty() ? -1 : this.data[this.front];
    }

    Rear(): number {
        return this.isEmpty() ? -1 : this.data[(this.rear + this.capacity - 1) % this.capacity];
    }

    isEmpty(): boolean {
        return this.size === 0;
    }

    isFull(): boolean {
        return this.size === this.capacity;
    }
}
