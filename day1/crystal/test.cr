# testing first unique char from string in main.cr
require "./main.cr"
require "spec"

# Define test cases as a hash with input and expected output
test_cases = {
  "leetcode"                                                       => 0,
  "loveleetcode"                                                   => 2,
  "aabb"                                                           => -1,
  "aabbcc"                                                         => -1,
  "aabbccddeeffgghh"                                               => -1,
  "aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz"           => -1,
  "aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz1234567890" => 52,
}

describe "Sanity Check" do
  it "should pass this simple test" do
    (1 + 1).should eq(2)
  end
end

describe "First Unique Character" do
  test_cases.each do |input, expected|
    it "returns #{expected} for input '#{input}'" do
      result = input.first_uniq_char
      result.should eq(expected)
    end
  end
end
