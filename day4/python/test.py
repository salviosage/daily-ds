
import unittest
from main import MyCircularQueue

class TestMyCircularQueue(unittest.TestCase):
    def test_operations(self):
        q = MyCircularQueue(3)
        self.assertTrue(q.enQueue(1))
        self.assertTrue(q.enQueue(2))
        self.assertTrue(q.enQueue(3))
        self.assertFalse(q.enQueue(4))
        self.assertEqual(q.Rear(), 3)
        self.assertTrue(q.isFull())
        self.assertTrue(q.deQueue())
        self.assertTrue(q.enQueue(4))
        self.assertEqual(q.Rear(), 4)

if __name__ == "__main__":
    unittest.main()
