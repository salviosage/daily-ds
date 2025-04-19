export function topKFrequent(nums: number[], k: number): number[] {
    const freq: Record<number, number> = {};
    nums.forEach(n => freq[n] = (freq[n] || 0) + 1);
    return Object.entries(freq)
        .sort((a, b) => b[1] - a[1])
        .slice(0, k)
        .map(entry => parseInt(entry[0]));
}
