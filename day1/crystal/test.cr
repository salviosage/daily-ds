# testing  first unique char from string  in main.cr
require "./main.cr"

# making test case an array 

test_case = [
  "leetcode",
  "loveleetcode",
  "aabb",
  "aabbcc",
  "aabbccddeeffgghh",
  "aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz",
  "aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz1234567890"
]



# use until to get all test cases done 
test_case.each do |test|
  # call the method from main.cr
  result = test.first_uniq_char
  # print the result
  puts "The first unique character in '#{test}' is at index #{result}"

end
