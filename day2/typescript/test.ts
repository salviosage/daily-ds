
import { topKFrequent } from "./main";

const result1 = topKFrequent([1,1,1,2,2,3], 2);
console.assert(result1.includes(1) && result1.includes(2), "Test 1 failed");

const result2 = topKFrequent([1], 1);
console.assert(result2[0] === 1, "Test 2 failed");

console.log("All tests passed");
