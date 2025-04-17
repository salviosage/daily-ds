
import {firstUniqueChar}  from './main';

const testCases = [
    { input: "leetcode", expected: 0 },
    { input: "loveleetcode", expected: 2 },
    { input: "aabb", expected: -1 },
    { input: "abcabc", expected: -1 },
    { input: "aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz", expected: -1 },
    { input: "a", expected: 0 },
    { input: "ab", expected: 0 },
    { input: "abc", expected: 0 }
];
const runTests = () => {
    testCases.forEach(({ input, expected }, index) => {
        const result = firstUniqueChar(input);
        if (result === expected) {
            console.log(`Test case ${index + 1} passed.`);
        } else {
            console.error(`Test case ${index + 1} failed: expected ${expected}, got ${result}`);
        }
    });
}
runTests();

