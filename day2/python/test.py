
import unittest
from main import top_k_frequent

class TestTopKFrequent(unittest.TestCase):
    def test_case_1(self):
        result = top_k_frequent([1,1,1,2,2,3], 2)
        self.assertIn(1, result)
        self.assertIn(2, result)

    def test_case_2(self):
        result = top_k_frequent([1], 1)
        self.assertEqual(result, [1])

if __name__ == '__main__':
    unittest.main()
