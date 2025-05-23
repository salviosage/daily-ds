export const firstUniqueChar = (s: string): number => {
    const charCount: { [key: string]: number } = {};
    
    for (const char of s) {
        charCount[char] = (charCount[char] || 0) + 1;
    }
    
    for (let i = 0; i < s.length; i++) {
        if (charCount[s[i]] === 1) {
        return i;
        }
    }
    
    return -1;
    }