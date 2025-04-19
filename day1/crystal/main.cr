class String
  def first_uniq_char : Int32
    count = Hash(Char, Int32).new(0)
    self.each_char { |c| count[c] += 1 }
    self.each_char.with_index do |c, i|
      return i if count[c] == 1
    end
    -1
  end
end
