
require "./main"
require "spec"

describe MyCircularQueue do
  it "works correctly" do
    cq = MyCircularQueue.new(3)
    cq.en_queue(1).should be_true
    cq.en_queue(2).should be_true
    cq.en_queue(3).should be_true
    cq.en_queue(4).should be_false
    cq.rear.should eq(3)
    cq.is_full.should be_true
    cq.de_queue.should be_true
    cq.en_queue(4).should be_true
    cq.rear.should eq(4)
  end
end
