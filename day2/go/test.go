
package main

import (
    "testing"
)

func TestTopKFrequent(t *testing.T) {
    res := topKFrequent([]int{1,1,1,2,2,3}, 2)
    found := map[int]bool{}
    for _, v := range res {
        found[v] = true
    }
    if !(found[1] && found[2]) {
        t.Fail()
    }

    res = topKFrequent([]int{1}, 1)
    if res[0] != 1 {
        t.Fail()
    }
}
