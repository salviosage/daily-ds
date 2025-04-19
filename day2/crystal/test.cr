
require "./main"
require "spec"

describe "Top K Frequent" do
  it "returns [1,2]" do
    top_k_frequent([1,1,1,2,2,3], 2).should contain(1).and contain(2)
  end

  it "returns [1]" do
    top_k_frequent([1], 1).should eq([1])
  end
end
