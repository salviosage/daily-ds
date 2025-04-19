

package main

import (
    "testing"
)

func TestFirstUniqChar(t *testing.T) {
	test_case := map[string]int{
		"leetcode":      0,
		"loveleetcode": 2,
		"aabb":         -1,
	}
	for str, expected := range test_case {
		res := firstUniqChar(str)
		if res != expected {
			t.Errorf("Expected %d, got %d", expected, res)
			t.Fail()
		}
	}
}
