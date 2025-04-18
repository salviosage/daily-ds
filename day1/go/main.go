package main

func firstUniqChar(s string) int {
    charCount := make(map[rune]int)

    // Count occurrences of each character
    for _, char := range s {
        charCount[char]++
    }

    // Find the index of the first unique character
    for i, char := range s {
        if charCount[char] == 1 {
            return i
        }
    }

    return -1 // No unique character found
}