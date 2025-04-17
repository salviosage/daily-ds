import unittest
from main import firstUniqChar  # Ensure this function is implemented in main.py

class TestFirstUniqChar(unittest.TestCase):
    def test_leetcode(self):
        self.assertEqual(firstUniqChar("leetcode"), 0)

    def test_loveleetcode(self):
        self.assertEqual(firstUniqChar("loveleetcode"), 2)

    def test_aabb(self):
        self.assertEqual(firstUniqChar("aabb"), -1)

    def test_empty_string(self):
        self.assertEqual(firstUniqChar(""), -1)

    def test_single_character(self):
        self.assertEqual(firstUniqChar("a"), 0)

    def test_two_characters(self):
        self.assertEqual(firstUniqChar("ab"), 0)

    def test_three_characters(self):
        self.assertEqual(firstUniqChar("abc"), 0)

    def test_repeating_characters(self):
        self.assertEqual(firstUniqChar("aabbccddeeffgghhii"), -1)

    def test_last_unique_character(self):
        self.assertEqual(firstUniqChar("aabbccddeeffgghhi"), 16)

    def test_no_unique_character(self):
        self.assertEqual(firstUniqChar("aabbccddeeffgghhiijj"), -1)

if __name__ == "__main__":
    unittest.main()