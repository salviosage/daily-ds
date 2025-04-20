class MinStack
    def initialize
      @stack = [] of Int32
      @min_stack = [] of Int32
    end
  
    def push(val : Int32)
      @stack << val
      @min_stack << val if @min_stack.empty? || val <= @min_stack.last
    end
  
    def pop
      @min_stack.pop if @stack.pop == @min_stack.last
    end
  
    def top : Int32
      @stack.last
    end
  
    def get_min : Int32
      @min_stack.last
    end
  end
  