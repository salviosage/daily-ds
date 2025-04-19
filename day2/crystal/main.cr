def top_k_frequent(nums : Array(Int32), k : Int32) : Array(Int32)
    freq = Hash(Int32, Int32).new(0)
    nums.each { |n| freq[n] += 1 }
  
    freq.to_a.sort_by { |_, v| -v }.first(k).map { |pair| pair[0] }
  end
  