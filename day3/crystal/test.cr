
require "./main"
require "spec"

describe MinStack do
  it "works correctly" do
    stack = MinStack.new
    stack.push(-2)
    stack.push(0)
    stack.push(-3)
    stack.get_min.should eq(-3)
    stack.pop
    stack.top.should eq(0)
    stack.get_min.should eq(-2)
  end
end
