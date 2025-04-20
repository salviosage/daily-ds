
import unittest
from main import MinStack

class TestMinStack(unittest.TestCase):
    def test_stack(self):
        s = MinStack()
        s.push(-2)
        s.push(0)
        s.push(-3)
        self.assertEqual(s.get_min(), -3)
        s.pop()
        self.assertEqual(s.top(), 0)
        self.assertEqual(s.get_min(), -2)

if __name__ == "__main__":
    unittest.main()
