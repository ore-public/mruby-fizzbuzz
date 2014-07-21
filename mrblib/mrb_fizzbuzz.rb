class Array
  def fizzbuzz2
    self.map do |v|
      if (v % 15) == 0
        'FizzBuzz'
      elsif (v % 3) == 0
        'Fizz'
      elsif (v % 5) == 0
        'Buzz'
      else
        v
      end
    end    
  end
end
