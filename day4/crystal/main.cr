class MyCircularQueue
    @data : Array(Int32)
    @front : Int32
    @rear : Int32
    @size : Int32
    @capacity : Int32
  
    def initialize(k : Int32)
      @data = Array.new(k, 0)
      @front = 0
      @rear = 0
      @size = 0
      @capacity = k
    end
  
    def en_queue(value : Int32) : Bool
      return false if is_full
      @data[@rear] = value
      @rear = (@rear + 1) % @capacity
      @size += 1
      true
    end
  
    def de_queue : Bool
      return false if is_empty
      @front = (@front + 1) % @capacity
      @size -= 1
      true
    end
  
    def front : Int32
      is_empty ? -1 : @data[@front]
    end
  
    def rear : Int32
      is_empty ? -1 : @data[(@rear + @capacity - 1) % @capacity]
    end
  
    def is_empty : Bool
      @size == 0
    end
  
    def is_full : Bool
      @size == @capacity
    end
  end
  