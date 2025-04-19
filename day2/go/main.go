package main

import "sort"

func topKFrequent(nums []int, k int) []int {
    freq := map[int]int{}
    for _, n := range nums {
        freq[n]++
    }
    type kv struct {
        Key int
        Val int
    }
    pairs := []kv{}
    for key, val := range freq {
        pairs = append(pairs, kv{key, val})
    }
    sort.Slice(pairs, func(i, j int) bool {
        return pairs[i].Val > pairs[j].Val
    })
    res := []int{}
    for i := 0; i < k; i++ {
        res = append(res, pairs[i].Key)
    }
    return res
}
